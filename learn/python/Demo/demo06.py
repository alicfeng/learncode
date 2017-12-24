#!/usr/bin/python
# -*- coding: UTF-8 -*-

def fen_fun(index):
    if index == 1 or index == 2:
        return 1
    else:
        return fen_fun(index - 2) + fen_fun(index - 1)


print fen_fun(40)
