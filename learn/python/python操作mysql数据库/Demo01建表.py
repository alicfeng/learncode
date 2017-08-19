#!/usr/bin/python
# -*- coding: UTF-8 -*-

import BaseDatabaseHelper

# 连接数据库
db = BaseDatabaseHelper.db

# 使用cursor()方法获取操作游标
cursor = db.cursor()

# 使用execute方法执行SQL语句
cursor.execute("SELECT VERSION()")

# 使用 fetchone() 方法获取一条数据库。
data = cursor.fetchone()

print "Database version : %s " % data

# 如果数据表已经存在使用 execute() 方法删除表。
cursor.execute("DROP TABLE IF EXISTS employee")

# 创建数据表SQL语句
sql = """CREATE TABLE employee (
         id INT PRIMARY KEY AUTO_INCREMENT,
         FIRST_NAME  CHAR(20) NOT NULL,
         LAST_NAME  CHAR(20),
         AGE INT,
         SEX CHAR(1),
         INCOME FLOAT )"""

cursor.execute(sql)

# 关闭数据库连接
db.close()
