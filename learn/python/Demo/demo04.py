#!/usr/bin/python
# -*- coding: UTF-8 -*-


number = []
for i in range(3):
    x = input("please input integer:\n")
    number.append(x)

# 分类 默认从小到大 0-9 a-z
number.sort()

print number