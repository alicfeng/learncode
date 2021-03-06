# coding=utf-8
import math
import os
from os import listdir

import PIL.Image as Image
import itchat
from numpy import *

itchat.auto_login(enableCmdQR=False)

friends = itchat.get_friends(update=True)[0:]

user = friends[0]["UserName"]

print(user)

os.mkdir(user)

num = 0

for i in friends:
    img = itchat.get_head_img(userName=i["UserName"])
    fileImage = open(user + "/" + str(num) + ".jpg", 'wb')
    fileImage.write(img)
    fileImage.close()
    num += 1

pics = listdir(user)

numPic = len(pics)

print(numPic)

eachSize = int(math.sqrt(float(960 * 960) / numPic))

print(eachSize)

numLine = int(960 / eachSize)

toImage = Image.new('RGB', (960, 960))

print(numLine)

x = 0
y = 0

for i in pics:
    try:
        # 打开图片
        img = Image.open(user + "/" + i)
    except IOError:
        print("Error: 没有找到文件或读取文件失败")
    else:
        # 缩小图片
        img = img.resize((eachSize, eachSize), Image.ANTIALIAS)
        # 拼接图片
        toImage.paste(img, (x * eachSize, y * eachSize))
        x += 1
        print x
        if x == numLine:
            x = 0
            y += 1

toImage.save(user + ".jpg")

itchat.send_image(user + ".jpg", 'filehelper')

