'''
Python 学习笔记——文件操作 

文章地址:https://weepingdogel.github.io/posts/python%E5%AD%A6%E4%B9%A0%E7%AC%94%E8%AE%B0%E6%96%87%E4%BB%B6%E6%93%8D%E4%BD%9C/
'''

import os
import datetime

def sign():
    # 程序标识
    print(
'''
╭╮╭╮╭╮╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╭━━━╮╱╱╱╱╱╱╱╱╭╮
┃┃┃┃┃┃╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╰╮╭╮┃╱╱╱╱╱╱╱╱┃┃
┃┃┃┃┃┣━━┳━━┳━━┳┳━╮╭━━╮┃┃┃┣━━┳━━┳━━┫┃
┃╰╯╰╯┃┃━┫┃━┫╭╮┣┫╭╮┫╭╮┃┃┃┃┃╭╮┃╭╮┃┃━┫┃
╰╮╭╮╭┫┃━┫┃━┫╰╯┃┃┃┃┃╰╯┣╯╰╯┃╰╯┃╰╯┃┃━┫╰╮
╱╰╯╰╯╰━━┻━━┫╭━┻┻╯╰┻━╮┣━━━┻━━┻━╮┣━━┻━╯
╱╱╱╱╱╱╱╱╱╱╱┃┃╱╱╱╱╱╭━╯┃╱╱╱╱╱╱╭━╯┃
╱╱╱╱╱╱╱╱╱╱╱╰╯╱╱╱╱╱╰━━╯╱╱╱╱╱╱╰━━╯
'''
    )

def filecrt(filename):
    # 文件创建
    if os.path.exists(filename): #检查文件是否存在
        print(str(datetime.datetime.now())+ ": 文件已存在")
        return 0
    else:
        f = open(filename,'x')
        f.close()
        print(str(datetime.datetime.now()) + ": 已创建文件: " + filename)
        return 1

def filewrt(filename):
    fruits = ['apple', 'banana', 'strawbarry','orange'] # 给出要写的内容
    # 文件写入操作
    f = open(filename, 'w')
    for fruit in fruits:
        f.write(fruit + '\n')
        print(str(datetime.datetime.now()) + ": 已写入" + fruit)
    f.close()

def filedel(filename):
    # 删除文件操作
    if os.path.exists(filename):
        os.remove(filename)
        print(str(datetime.datetime.now()) + ": 已删除" + filename)
    else:
        print(str(datetime.datetime.now()) + filename + "不存在")

def fileread(filename):
    print(str(datetime.datetime.now()) + ": 读取中.." )
    f = open(filename,'r')
    print("-" * 5 + "文件内容" + "-" * 5 + "\n")
    print(f.read())
    print("-" * 5 + "文件内容" + "-" * 5 + "\n")


sign()
if filecrt("test.txt") == 0:
    fileread("test.txt")
    filedel("test.txt")
else:
    filewrt("test.txt")
    fileread("test.txt")
    filedel("test.txt")

