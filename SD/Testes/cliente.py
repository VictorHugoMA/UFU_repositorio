import socket

host = 'localhost'  #Endereco IP do Servidor
port = 50000        #Porta que o Servidor esta

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM) #Cria o socket IPV4 e TCP
s.connect((host, port)) #Conecta ao servidor

s.sendall(str.encode('Hello, world')) #Envia os dados
data = s.recv(1024) #Recebe os dados - max 1024 bytes

print('Recebido: ', data.decode('utf-8')) #Decodifica os dados
