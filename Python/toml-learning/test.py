import toml
'''
toml 文件读取实例
'''
fileobj = open('config.toml')
parsed_toml = toml.load(fileobj)
title = parsed_toml['title']
name = parsed_toml['owner']['name']
version = parsed_toml['owner']['version']
sign = parsed_toml['owner']['sign']

def showsign():
    if parsed_toml['owner']['showsign'] == True:
        print(sign)
        print(version)

showsign()
