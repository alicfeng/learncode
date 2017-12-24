#!/usr/bin/python
# -*- coding: UTF-8 -*-
import os
import commands
import subprocess

print os.system("service apache2 status")

output = os.popen('service apache2 status', 'r')

print output.read()

# 2. commands 模块
# 返回(status, output)
print commands.getstatusoutput("ls")

# 只返回输出结果
print commands.getoutput("ls")

print subprocess.call("service apache2 status", shell=True)
