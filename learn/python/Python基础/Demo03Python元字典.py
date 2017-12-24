#!/usr/bin/python
# -*- coding: UTF-8 -*-

dict = {}
dict['one'] = "我是one"
dict[2] = "你是two"

tinydict = {'name': 'alic', 'code': 2016, 'dept': 'sales'}

print(dict['one'])  # 输出键为'one' 的值
print(dict[2])  # 输出键为 2 的值
print(tinydict)  # 输出完整的字典
print(tinydict.keys())  # 输出所有键
print(tinydict.values())  # 输出所有值
