'''
获取网页源代码
'''
import requests
from bs4 import BeautifulSoup

response = requests.get('https://music.163.com/#/song?id=28643177')
print(response.text)

# BeautifulSoup(response.text,'lxml')
