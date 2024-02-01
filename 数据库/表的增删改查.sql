use tony;


-- 插入数据
-- id name gender age
-- value: 单行插入
-- values: 多行插入
insert into myt values(0, "Kadmin", "male", 18);

-- 插入部分
insert into myt (name, age, gender) value("kami", 106, "male");

-- 多行插入
insert into myt (name, age, gender) value("77", 99, "female"), ("Wenti", 99, "male");

-------------------------------------------------------------------------------------
-- 查看所有数据
select * from myt;

-- 查看部分数据
select * from myt where id>2;

-- 查看部分数据
select name as 姓名, gender as 性别 FROM myt;

-------------------------------------------------------------------------------------
-- 修改表，添加字段
-- alter table 表名 add 列名 类型及约束
alter table myt add birthday datetime;

-- 修改字段(不重命名)
-- alter table 表名 modify 列名 类型及约束
alter table myt modify birthday date;

-- 修改字段(重命名)
-- alter table 表名 change 原名 新名 类型及约束
alter table myt change birthday birth date default "2004-03-15"; 

-- 删除字段
alter table myt drop age;

-- 修改内容
update myt set gender="female" where id=1;


-------------------------------------------------------------------------------------
-- 删除表
DELETE FROM myt WHERE id=1;

