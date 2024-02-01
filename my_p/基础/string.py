"""
    三个引号可扩展多行
"""

s = "me\
,\
too"

s1 = "hello, my world"

s2 = s1[-5:]  # 字符串索引

s3 = "hello, 'my' world"  # 双引号中可包含单引号 

s4 = s2 * 2 + " " + s3[1:3]  # 字符串操作

p1 = 'h' in s1 and 'M' not in s2 # True

s5 = str(False)  # 将非字符串转换为字符串

"""
    Python 的字符串常用方法（函数）

1. str.capitalize()    将字符串的第一个字符转换为大写(不修改，返回值)

2. str.casefold()    把字符串大写字符转换为小写(不修改，返回值)

3. str.count(str, beg= 0,end=len(string))    返回 str 在 string 里面出现的次数

4. str.encode() str.decode()

5. str.find(str, beg=0, end=len(string))
    检测 str 是否包含在字符串中，如果指定范围 beg(开始) 和 end(结束) ,
    则检查是否包含在指定范围内，如果包含返回开始的索引值，否则返回-1。

6. str.strip([chars])
    截掉字符串空格,换行符或指定字符。chars -- 指定删除的字符（默认即缺省为空格）
    lstrip() rstrip()

7. str.lower()    转换字符串中所有大写字符为小写。

8. str.split(str="", num=string.count(str))
    以 str 为分隔符截取字符串，如果 num 有指定值，则仅截取 num+1 个子字符串。
    返回列表

9. str.startwith() str.endwith() 
    判断是否以···开头或结尾
    
10. len(str) 返回字符串长度"""

s6 = "{0} love {1}, but {0} don't love {2}".format("I", "you", "her")

s7 = "{:.2f}, {:d}".format(3.14159, 26)

s8 = f"{s7}"

a = input("str:")
print(eval(a))  # 将字符串转换为可执行python语句
