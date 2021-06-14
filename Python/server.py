'''
网络编程之服务端
'''
#!/usr/bin/python
# -*- coding: UTF-8 -*-

'''
ARP请求
By WeepingDogel
'''
import sys
#消除报错
import logging
logging.getLogger("scapy.runtime")
#导入scapy
from scapy.all import *

#预置参数
localmac = 'bc:5f:f4:aa:04:c9' #本机物理地址
localip = '192.168.0.109' #本机IP
destip = '192.168.0.1' #目标IP地址
ifname = 'enp3s0' #网卡名

print("By WeepingDogel")
result_raw = srp(Ether(src=localmac, dst='FF:FF:FF:FF:FF:FF')/ARP(op=1,hwsrc = localmac, pdst = destip),iface = ifname, verbose = False)

print('目标Mac:' + result_raw[0].res[0][1].getlayer(ARP).fields['hwsrc'] + '\n' + '目标IP：' + result_raw[0].res[0][1].getlayer(ARP).fields['psrc'])
'''
sr() 发送三层数据包，等待接收一个或者多个数据包响应
sr1() 发送三层数据包，仅等待接受一个响应
srp() 发送二层数据包，并等待响应
send() 仅仅发送三层数据包，系统会自动处理路由和二层信息
sendp() 发送二层数据包，其余同上
'''

#result_list = result_raw[0].res

#print('IP地址:' + result_list[0][1][1].fields['psrc'] + 'MAC地址' + res)
