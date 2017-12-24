#!/usr/bin/python
# -*- coding: UTF-8 -*-

import demjson as json

data = [{'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}]

json_data = json.encode(data)
print json_data


