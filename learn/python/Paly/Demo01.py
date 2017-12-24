# import pythoncom
import socket
import requests, time

my_name = socket.getfqdn(socket.gethostname())

my_address = socket.gethostbyname(my_name)


def main():
    print my_name
    print my_address

main()
