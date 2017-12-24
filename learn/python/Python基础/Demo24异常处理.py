#!/usr/bin/python
# coding=utf-8

try:
    open("exceptionFile", "r").write("我在写入content")
except IOError:
    print "文件不存在"
else:
    print "文件写入成功"
