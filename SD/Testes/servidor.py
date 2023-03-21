import socket

host = 'localhost'  #Endereco IP do Servidor
port = 50000        #Porta que o Servidor esta

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM) #Cria o socket IPV4 e TCP
s.bind((host, port)) #Vincula o socket a porta
s.listen() #Aguarda conexoes
print('Aguardando conexao...')

conn,ender = s.accept() #Aceita a conexao
print('Conectado em: ', ender)

while True:
    data = conn.recv(1024) #Recebe os dados - max 1024 bytes
    if not data:
        print('Fim da conexao')
        conn.close()
        break
    conn.sendall(data) #Envia os dados de volta
