use tony;

-- 计数
select count(*) from myt where gender='male';

-- 最大值
select max(age) from myt;

-- 最小值
select min(age) from myt;

-- 求和
select sum(id) from myt;

-- 平均值
select avg(age) from myt;

-- 四舍五入
select round(avg(age), 2) as '平均年龄' from myt;


-- -- 分组 -- --
select count(*) from myt group by gender; 

-- 显示组中的内容
select gender, group_concat(name) from myt group by gender; 

-- 分组查询后指定一些条件来输出查询结果
select age, gender, group_concat(name) from myt group by age having age>=18; 
-- 在查询过程中执行顺序：from>where>group（含聚合）>having>order。