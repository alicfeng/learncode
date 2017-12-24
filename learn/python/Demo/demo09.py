#!/usr/bin/python
# -*- coding: UTF-8 -*-
import time

bundle = {"name": "alic", "age": 21, "sex": "男"}

for key, value in dict.items(bundle):
    print key, value
    # 沉睡一秒
    time.sleep(1)
