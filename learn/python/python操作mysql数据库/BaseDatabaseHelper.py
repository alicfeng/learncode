#!/usr/bin/python
# -*- coding: UTF-8 -*-
import MySQLdb as mysql
import DatabaseConfig as DBConfig


# 打开数据库连接
db = mysql.connect(host=DBConfig.DB_IP, user=DBConfig.DB_USER, passwd=DBConfig.DB_PSD, db=DBConfig.DB_DB,
                   charset=DBConfig.DN_CHARSET)
