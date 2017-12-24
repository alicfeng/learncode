#!/usr/bin/python
# -*- coding: UTF-8 -*-

import BaseDatabaseHelper

# 连接数据库
db = BaseDatabaseHelper.db

# 使用cursor()方法获取操作游标
cursor = db.cursor()


# SQL 插入语句
sql = """INSERT INTO employee(FIRST_NAME,
         LAST_NAME, AGE, SEX, INCOME)
         VALUES ('冯', 'Alic', 20, 'M', 2000)"""

try:
    # 执行sql语句
    cursor.execute(sql)
    # 提交到数据库执行
    db.commit()
    print "插入成功~~"
except:
    # Rollback in case there is any error
    db.rollback()
    print "插入出错~~"
# 关闭数据库连接
db.close()
