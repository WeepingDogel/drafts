'''
网易云音乐下载实例

已失效
'''

import requests
# http://music.163.com/song/media/outer/url?id=

file_url = "https://m10.music.126.net/20201209141406/888303d8a7f9a0149e2f30c5baa6fbab/ymusic/8fe5/ee62/1730/6da19a5faacde10011454380620309a8.mp3"

r = requests.get(file_url, stream=True)
with open('长江之歌.mp3','wb') as mp3:
    i = 0
    for chunk in r.iter_content(chunk_size=1024):
        if chunk:
            i = i + 1
            print(i)
            mp3.write(chunk)
    print(mp3.name + " Gotten")
