#!/usr/bin/python
# -*- coding: UTF-8 -*-

import BaseDatabaseHelper

# 连接数据库
db = BaseDatabaseHelper.db

# 使用cursor()方法获取操作游标
cursor = db.cursor()

# SQL 查询语句
sql = "SELECT * FROM employee"
try:
    # 执行SQL语句
    cursor.execute(sql)
    # 获取所有记录列表
    results = cursor.fetchall()
    # 遍历结果集
    for row in results:
        first_name = row[1]
        last_name = row[2]
        age = row[3]
        sex = row[4]
        income = row[5]
        # 打印结果
        print "fname=%s,lname=%s,age=%d,sex=%s,income=%d" % \
              (first_name, last_name, age, sex, income)
except:
    print "Error: unable to fecth data"

# 关闭数据库连接
db.close()
