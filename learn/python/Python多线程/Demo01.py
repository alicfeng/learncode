#!/usr/bin/python
# -*- coding: UTF-8 -*-

import time, thread


# 定义线程的函数
def print_time(thread_name, delay):
    count = 0
    while count < 5:
        time.sleep(delay)
        count += 1
        print "%s:%s" % (thread_name, time.ctime(time.time()))


# 创建两个线程
try:
    thread.start_new_thread(print_time, ("one", 1))
    thread.start_new_thread(print_time, ("two", 2))
except:
    print "Error:thread"
while 1:
    pass
