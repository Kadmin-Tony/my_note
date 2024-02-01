use tony;

-- 查看全部表
show tables;

-- 删除表
drop table myt;

-- 创建表
-- auto_increment 自动增长
-- not null 不能为空
-- primary key 主键
-- 约束需放在数据类型后
CREATE TABLE `myt` (
  `id` int NOT NULL AUTO_INCREMENT COMMENT '这是注释',
  `name` varchar(30) NOT NULL,
  `gender` char(6) NOT NULL,
  `age` int DEFAULT NULL,
  `birth` date DEFAULT '2004-03-15',
  `belongs` char(20) DEFAULT NULL,
  PRIMARY KEY (`id`)
)

-- 数据类型:https://www.w3school.com.cn/sql/sql_datatypes.asp


-- 查看创建表的语句
show create table myt;

-- 查看表结构
desc myt;


