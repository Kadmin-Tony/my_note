use tony;

create table users(
	id int not null auto_increment,
	name varchar(30) not null,
	primary key(`id`)
);

-- 以其他表的数据创建表
insert into users (name) select name from myt;

-- 外键 foreign key(···) references ···(···)
-- 删除外键alter table myt drop foreign key ···;