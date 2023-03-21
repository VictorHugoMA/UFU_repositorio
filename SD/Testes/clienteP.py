import socket

hostname = socket.gethostname() 

ipaddr = "192.168.15.15"

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

addr = (ipaddr, 1237) 

c = "S"
while c.upper() == "S":

    req_domain= input("Nome do dominio:")
    send = s.sendto(req_domain.encode(), addr) 
    data, address = s.recvfrom(1024)
    reply_ip= data.decode().strip()  
    print(f"IP para o dominio {req_domain}:{reply_ip}")
    c = (input("Continuar? (s/n)"))