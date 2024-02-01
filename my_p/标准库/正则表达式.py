import re

r"""
    .  匹配任意一个除了\n的字符
    [] 匹配列举的字符
    \d 匹配数字 \D 匹配非数字
    \s 匹配空白 \S 匹配非空白字符
    \w (a-z, A-Z, 0-9, _) \W 匹配非单词字符
    [^·] 匹配除了·以外的内容
"""

r"""
    *  匹配前⼀个字符出现0次或者⽆限次
    +  匹配前⼀个字符出现1次或者⽆限次,即⾄少有1次
    ?  匹配前⼀个字符出现1次或者0次,即要么有1次,要么没有
    {m}匹配前⼀个字符出现m次
    {m, n}······
    在"*","?","+","{m,n}"后⾯加上？，使贪婪变成⾮贪婪以匹配尽量少的字符
"""

r"""
    ^  匹配开头
    $  匹配结尾
"""

r"""
    |	匹配左右任意⼀个表达式
    (ab)	将括号中字符作为⼀个分组
    \num	引⽤分组num匹配到的字符串
    (?P<name>)	放于分组前以给分组起别名
    (?P=name)	引⽤别名为name分组匹配到的字符串
"""

r"""
    re.I 忽略大小写
    re.L 表示特殊字符集 \w, \W, \b, \B, \s, \S 依赖于当前环境
    re.M 多行模式
    re.S 即为 . 并且包括换行符在内的任意字符（. 不包括换行符）
    re.U 表示特殊字符集 \w, \W, \b, \B, \d, \D, \s, \S 依赖于 Unicode 字符属性数据库
    re.X 为了增加可读性，忽略空格和 # 后面的注释
"""

s1 = r"(\w+?)_(.*?)-"  # 元字符串,忽视转义字符
s2 = "hello_world is my-first contence"

# match:匹配开头，如果不匹配则返回none
res = re.match(s1, s2)
print(res.group(0))
print(res.group(1))
print(res.group(2))

# compile 函数用于编译正则表达式
# 生成一个正则表达式（ Pattern ）对象
# 供 match() 和 search() 这两个函数使用。
pattern = re.compile(s1)
m = pattern.match(s2)
m.group()  # 结果
m.start()  # 开始位置
m.end()  # 结束位置
m.span()  # 返回一个元组

# search:匹配整个字符串并返回第一个结果
re.search(s1, s2).group()

#findall:返回一个列表
#finditer:返回一个迭代器

#sub(pattern, repl, string, count=0, flags=0)
#repl:替换的字符串或函数
#count:替换的最大次数，默认0全部替换
def add(temp):
    strNum = temp.group()
    num = int(strNum) + 1
    return str(num)
ret = re.sub(r"\d+", add, "python = 997")
print(ret)

#split:根据匹配进⾏切割字符串，并返回⼀个列表。
#split(pattern, string, maxsplit=0, flags=0)