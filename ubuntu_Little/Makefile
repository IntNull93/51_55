CFLAG=-I./ -I/home/luokj/Ice-3.5.1/cpp/include -L/home/luokj/Ice-3.5.1/cpp/lib -lIce -lIceUtil -lpthread
CC=g++

default:
	$(CC) -o server_ubuntu Server.cpp Printer.cpp $(CFLAG)
	$(CC) -o client_ubuntu Client.cpp Printer.cpp $(CFLAG) -g
clean:
	rm server_ubuntu client_ubuntu
