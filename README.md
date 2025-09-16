
# Percona Server auto manager

`Percona Server auto manager` is a branch of `percona-server-8.4.6-6` bringing `query record` and `sql filter`.

Documentation: [percona-server-8.4.6-6](http://www.percona.com/doc/percona-server/8.4)

**note**: the `sql filter` can be helpful when you want restrict the developers only execute allowed sql statement, you can disabled this with `--skip-sql-filter` option.

## How to build

you can compile the source with the same way in [percona-source-install](https://docs.percona.com/percona-server/8.4/compile-percona-server.html#install-percona-server-for-mysql-from-the-git-source-tree), you can enable this with the following option:
```c
git clone --recursive https://github.com/arstercz/percona-server-auto-manager-v8.4.git
cd percona-server-auto-manager-v8.4

mkdir build
cd build

# we can disable all, and only make client
cmake .. \
  -DWITH_SERVER=OFF \
  -DWITH_INNODB_MEMCACHED=OFF \
  -DWITH_UNIT_TESTS=OFF \
  -DWITH_PERFSCHEMA_STORAGE_ENGINE=OFF \
  -DWITH_NDBCLUSTER=OFF \
  -DWITH_EMBEDDED_SERVER=OFF \
  -DBUILD_TESTING=OFF \
  -DWITH_MYROCKSDB=OFF \
  -DWITH_KEYRING_VAULT=OFF \
  -DWITH_PERCONA_AUTHENTICATION_LDAP=OFF \
  -DWITH_AUTHENTICATION_LDAP=OF

# just make client
cd client
make -j4
```
the sql filter feature was embedded into `client/mysql` with `--sql-fiter` option, default is on, you can disabled this by `--skip-sql-filter` when you connect mysql server.

**note:** the tokudb need the `gcc version` must greater than `4.7`.


## How does it work?

### sql filter

We add the following rules before sending the actual sql queries to MySQL Server, return immediately if mathed these rules, otherwise send to MySQL Server:
```
1. select statement must have where/limit keywords;
2. update/delete statement must have where keyword;
3. disable 'update/delete ..where..(order by|limit)' syntax;
4. disable 'drop database/drop schema' syntax;
5. disable 'create index' syntax;
6. disable descreased ALTER syntax, this means you can 'add' column, but not 'drop|change|modify|rename' column;
7. disable 'grant all' syntax;
8. disable 'revoke' syntax;
9. disable 'load' syntax;
10. disabled descreased DDL syntax. this means you can not 'purge/truncate/drop' table;
11. disabled 'set ...' syntax, except 'set names ...' and 'set global ...';
12. disabled if table size is greater than --table-threshold value, default is 200(MB);
13. disable 'UPDATE,DELETE,INSERT,REPLACE,CREATE,DROP,ALTER,TRUNCATE' when read_only is enabled;
```

### record sql

We add `--record-file` option to record all sql, default is `/tmp/.mysql_record_all`, every user have a `$record-file.$USER` file to record the sql, you can use `--record-file=""` to skip record the sql query. if you login with root user:
```
# less /tmp/.mysql_record_all.root 
[2018-10-08T12:50:55 login:root user:root shell:/bin/bash cwd:/home/mysql/percona-server-auto-manager/client db:(null)] show databases
[2018-10-08T12:50:59 login:root user:root shell:/bin/bash cwd:/home/mysql/percona-server-auto-manager/client db:test] show tables
```
## How to use?

when you connect to mysql server, the sql filter was triggerd automaticly:
```
mysql arstercz@[10.0.21.5:3305 (none)] > alter table checksums add column sss varchar(50);                   

        [WARN] - Must 'use <database>' before alter table, current database is null.

mysql arstercz@[10.0.21.5:3305 (none)] > use percona
Database changed
mysql arstercz@[10.0.21.5:3305 percona] > alter table checksums drop column sss varchar(50);   

        [WARN]
         +-- alter table checksums drop column sss varchar(50)
         Caused by: disable descreased ALTER syntax.
this sql syntax was disabled by administrator

mysql arstercz@[10.0.21.5:3305 percona] > select * from checksums;

        [WARN]
         +-- select * from checksums
         Caused by: no where/limit for select clause
this sql syntax was disabled by administrator

mysql arstercz@[10.0.21.5:3305 percona] > delete from checksums;

        [WARN]
         +-- delete from checksums
         Caused by: no where for delete/update clause
this sql syntax was disabled by administrator

mysql arstercz@[10.0.21.5:3305 percona] > alter table test.user_info add column sss varchar(50);

        [WARN] - the test.user_info size is 4240MB, disallowed by administrator

```

## extra feature

### readonly prompt

you can add `\i` to mysql prompt option to know whether the mysql server is readonly or not, `ro` means `read only`, this maybe a slave host, `rw` means `read write`:
```
[mysql]
prompt = 'mysql \u@[\h:\p \d \i] > '
```
readonly check was embedded whether you enable `WITH_MEMCACHED_RECORD`:
```
mysql root@[localhost:s3301 (none) rw] > select @@read_only;
+-------------+
| @@read_only |
+-------------+
|           0 |
+-------------+
1 row in set (0.00 sec)

mysql root@[localhost:s3301 (none) rw] > set global read_only = 1;
Query OK, 0 rows affected (0.07 sec)

mysql root@[localhost:s3301 (none) ro] > set global read_only = 0;
Query OK, 0 rows affected (0.00 sec)

mysql root@[localhost:s3301 (none) rw] > 
```

### disable password prompt

The warning message occurs when you connect MySQL server with `-ppassword` option by default. we disabled this behavior. 
