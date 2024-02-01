from pymysql import *

conn = connect(host="localhost",
                port=3306,
                user="root",
                passwd="123456",
                database="tony")

cursor = conn.cursor()

# 返回结果行数
cursor.execute("select * from myt;")

# 查看下一条数据，返回元组
print(cursor.fetchone())

# 查看下几条数据，返回元组
print(cursor.fetchmany(3))

# 查看剩余的全部数据，返回二维元组
print(cursor.fetchall())

cursor.close()

conn.close()

