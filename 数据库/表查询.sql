use tony;

-- 完整语句
SELECT select_expr [,select_expr,...] [      
      FROM tb_name
      [WHERE 条件判断]
      [GROUP BY {col_name | postion} [ASC | DESC], ...] 
      [HAVING WHERE 条件判断]
      [ORDER BY {col_name|expr|postion} [ASC | DESC], ...]
      [LIMIT {[offset,]rowcount | row_count OFFSET offset}]
]

-- 起别名
-- 起别名后便不能使用本名
select m.name as 姓名, m.gender as 性别 from myt as m;

-- 去重
select distinct gender from myt;

-- 逻辑运算符
select * from myt where not (age!=99 and gender='male');


-- 模糊查询
-- like
-- % 替换一个或多个
-- _ 替换一个
select * from myt where name like "ka%";

-- rlike 正则
select * from myt where name rlike "^ka.*";


-- 范围查询(两边包含)
select * from myt where id /* not */ in (2, 4, 6);
select * from myt where age /* not */ between 100 and 1000;

-- null查询
select * from myt where birth is null;

-- 排序 desc 可改为倒序
select * from myt order by age /* desc */;
-- 年龄相同时按id倒序排
select * from myt order by age , id desc;
