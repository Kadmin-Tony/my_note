from pymysql import *

conn = connect(host="localhost",
                port=3306,
                user="root",
                passwd="123456",
                database="tony")

cursor = conn.cursor()

cursor.execute("insert into myt value(default, '2832', 'male', 0, null, null);")

conn.commit()
# conn.rollback()  可撤回修改

cursor.close()
conn.close()
