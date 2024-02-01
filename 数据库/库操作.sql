/*显示所有数据库*/
show databases; 

-- 创建数据库
create database /*if not exists*/ tony /*charset=utf8*/;

-- 使用数据库
use tony;

-- 显示当前数据库
select database();

-- 删除数据库
create database 123;
drop database 123;
