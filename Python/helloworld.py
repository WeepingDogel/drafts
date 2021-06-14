#!/usr/bin/python
# -*- coding: utf-8 -*- 
'''
HelloWorld

打印字符画
将列表里面的内容逐个输出

'''
def dash(x,y,a):
    if type(a) != str:
        print("不可以使用非字符的东西！")
    else:
        i = 0
        while i < y:
            a = a * x
            i = i + 1
        print(a)
print('''
▒█░▒█ ▒█▀▀▀ ▒█░░░ ▒█░░░ ▒█▀▀▀█ ▒█░░▒█ ▒█▀▀▀█ ▒█▀▀█ ▒█░░░ ▒█▀▀▄ 
▒█▀▀█ ▒█▀▀▀ ▒█░░░ ▒█░░░ ▒█░░▒█ ▒█▒█▒█ ▒█░░▒█ ▒█▄▄▀ ▒█░░░ ▒█░▒█ 
▒█░▒█ ▒█▄▄▄ ▒█▄▄█ ▒█▄▄█ ▒█▄▄▄█ ▒█▄▀▄█ ▒█▄▄▄█ ▒█░▒█ ▒█▄▄█ ▒█▄▄▀ 
''')
print("By WeepingDogel")
dash(2,6,"=")
username = input("Please type your name: ")
words = ['Zero', 'Single', 'Double', 'Three', 'Four', 'Five', 'Six', 'Seven', 'Eight', 'Nine', 'Ten']
if len(username) > 12:
    print("You are not allowed to use a name which is longer than 12 letters. ")
else:
    print("Let's Start!")
    for w in words:
        print(w, "|长度", len(w))
        dash(2,5,"-")
