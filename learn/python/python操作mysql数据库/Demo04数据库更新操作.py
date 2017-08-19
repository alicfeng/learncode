#!/usr/bin/python
# -*- coding: UTF-8 -*-

import BaseDatabaseHelper

# 连接数据库
db = BaseDatabaseHelper.db

# 使用cursor()方法获取操作游标
cursor = db.cursor()

# SQL 更新语句
sql = "UPDATE employee SET AGE = AGE + 1 WHERE SEX = '%c'" % ('M')
try:
    # 执行SQL语句
    cursor.execute(sql)
    # 提交到数据库执行
    db.commit()
    print "okay~~"
except:
    # 发生错误时回滚
    db.rollback()
    print "有错~~"
# 关闭数据库连接
db.close()
