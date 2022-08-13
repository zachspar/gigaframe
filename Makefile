CC = g++
CFLAGS = -g -Wall -std=c++17
SOURCES = cpp/implementation/*.cpp

all:
	$(CC) $(CFLAGS) -o giga_frame $(SOURCES)