use tony;

-- http://www.wtk.ink/python/17day/third-chapter/%E8%BF%9E%E6%8E%A5%E6%9F%A5%E8%AF%A2.html
-- on 表示条件
select m.*, w.expression from myt as m inner join worlds as w on m.belongs=w.name;

-- 左链接，显示myt中不符合条件的值
select m.*, w.expression from myt as m left join worlds as w on m.belongs=w.name;
-- 右链接，同理
select m.*, w.expression from worlds as w right join myt as m on m.belongs=w.name;

-- 查询没有对应信息的数据
select m.*, w.expression from myt as m left join worlds as w on m.belongs=w.name having w.expression is null;