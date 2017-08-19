#!/usr/bin/python
# -*- coding: UTF-8 -*-
score = input("请输入您的成绩:")


def print_belong(str):
    print "您属于的等级为:", str


if score > 100 or score < 0:
    print_belong("有毒.....爆了")
elif score >= 90:
    print_belong("A")
elif score >= 60:
    print_belong("B")
else:
    print_belong("C")
