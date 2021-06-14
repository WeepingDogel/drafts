# 加载配置文件

``` python
def loadtoml(filename):
    # load the *.toml file 
    fileobj = open(filename)
    config = toml.load(fileobj)
    return config
```