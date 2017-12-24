#!/usr/bin/python
# -*- coding: UTF-8 -*-

# 简单的while循环
count = 0
while count < 9:
    print 'The count is:', count
    count += 1
print "Good bye!"

# continue 和 break 用法

i = 1
while i < 10:
    i += 1
    if i % 2 > 0:  # 非双数时跳过输出
        continue
    print i  # 输出双数2、4、6、8、10

i = 1
while 1:  # 循环条件为1必定成立
    print i  # 输出1~10
    i += 1
    if i > 10:  # 当i大于10时跳出循环
        break

while True:  # 该条件永远为true，循环将无限执行下去
    num = raw_input("Enter a number  :")
    print "You entered: ", num

print "Good bye!"

count = 0
while count < 5:
    print count, " is  less than 5"
    count += 1
else:
    print count, " is not less than 5"
