use tony;

-- 视图是一张虚拟的表
-- 不可更新,仅用来方便查
create view as select m.*, w.expression from myt as m left join worlds as w on m.belongs=w.name;

-- 删除
drop view v_myt;


-- 开启事务(两条效果一样)
start transaction;
begin;
-- 事务语句(其中有多条语句)
-- 确认提交
commit;
-- 放弃提交，返回之前状态
rollback;


-- 针对有非常多数据的数据库时可创建索引
-- 若索引为字符串则需要说明其长度
CREATE INDEX myt ON my(name(30))

-- 查看索引
show INDEX FROM myt;