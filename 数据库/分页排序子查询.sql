use tony;


select * from myt limit 5;

-- 从2开始，显示5个数据
select * from myt limit 2, 5;

-- order 要在 limit 前
select * from myt order by age desc limit 2, 5;

-- 子查询
select * from myt where age=(select max(age) from myt);