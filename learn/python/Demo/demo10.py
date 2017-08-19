#!/usr/bin/python
# -*- coding: UTF-8 -*-
import time


def print_time():
    print time.strftime("%Y-%m-%d %H:%m:%S", time.localtime(time.time()))

print_time()
# 暂停一秒
time.sleep(1)
print_time()
