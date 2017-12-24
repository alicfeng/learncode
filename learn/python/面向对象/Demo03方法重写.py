#!/usr/bin/python
# -*- coding: UTF-8 -*-

class Parent:  # 定义父类
    def __init__(self):
        print "初始化父类构造函数"

    def myMethod(self):
        print '调用父类方法'


class Child(Parent):  # 定义子类
    def __init__(self):
        print "初始化子类构造函数"

    def myMethod(self):
        print '调用子类方法'


c = Child()  # 子类实例
c.myMethod()  # 子类调用重写方法
