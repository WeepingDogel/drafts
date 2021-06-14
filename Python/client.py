#!/usr/bin/python
# client
'''
网络编程之客户端
'''
import socket,threading
def read_server(client_socket):
    while True:
        content = client_socket.recv(2048).decode('UTF-8')
        if content is not None:
            print(content)

client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client_socket.connect(('192.168.56.8',30000))

threading.Thread(target=read_server, args=(client_socket,)).start()

while True:
    line = input('')
    if line is not None or line == 'exit':
        break
    client_socket.send(line.encode('UTF-8'))