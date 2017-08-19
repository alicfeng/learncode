#!/usr/bin/python
# -*- coding: UTF-8 -*-

for i in range(1, 5):
    for j in range(1, 5):
        for k in range(1, 5):
            if i != j and i != k and k != j:
                print i, j, k
