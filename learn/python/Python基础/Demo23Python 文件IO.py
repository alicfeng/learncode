#!/usr/bin/python
# -*- coding: UTF-8 -*-
# coding=utf-8
import os

# Python的os模块提供了帮你执行文件处理操作的方法，比如重命名和删除文件。
print "Python 是一个非常棒的语言，不是吗？"

# 从键盘输入
# str = input("请输入：")
# print "你输入的内容是: ", str

# 打开一个文件
fo = open("file", "w+")
print "文件名: ", fo.name
print "是否已关闭 : ", fo.closed
print "访问模式 : ", fo.mode
print "末尾是否强制加空格 : ", fo.softspace

# 写入
fo.write("我是alic come from 阳江")
fo.close()

# 读取
fo = open("file", "r+")
print "读取的字符串是 : ", fo.read(7)

# 关闭文件
fo.close()

# 打开一个文件
fo = open("file", "r+")
print "读取的字符串是 : ", fo.read(10)

# 查找当前位置
position = fo.tell()
print "当前文件位置 : ", position

# 把指针再次重新定位到文件开头
fo.seek(0, 0)

print "重新读取字符串 : ", fo.read(10)
# 关闭打开的文件
fo.close()

# 文件重命名与删除操作
os.rename("file", "file1")

os.remove("file1")

# 创建目录
os.mkdir("pythonDir", 777)

# 删除目录
os.rmdir("pythonDir")

# 将当前目录改为"/home/newdir"
# os.chdir("/home/newdir")

# 给出当前的目录
print os.getcwd()

# 返回path指定的文件夹包含的文件或文件夹的名字的列表
print os.listdir("/home/alic/WorkSpace/Python/StudyPython")

# 创建软链接
# os.mkdir("/home/alic/WorkSpace/Python/StudyPython/src")
# os.mkdir("/home/alic/WorkSpace/Python/StudyPython/dst")
src = "/home/alic/WorkSpace/Python/StudyPython/src"  # 源地址
dst = "/home/alic/WorkSpace/Python/StudyPython/dst"  # 目标地址
os.symlink(src, dst)
print '创建软连接成功'
# 删除软链接
os.remove(dst)
print "删除软链接成功"

# 更改权限
file = open("demoFile", "w+")
os.chmod(file.name, 0777)
