# Makefile for autoWithTemplatedFunction project

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: autoWithTemplatedFunction

autoWithTemplatedFunction: autoWithTemplatedFunction.o
	$(CC) -o autoWithTemplatedFunction autoWithTemplatedFunction.o

autoWithTemplatedFunction.o: autoWithTemplatedFunction.cpp
	$(CC) -c -o autoWithTemplatedFunction.o autoWithTemplatedFunction.cpp

clean:
	rm -f autoWithTemplatedFunction *.o

# Run the following command for cross-compilation:
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++
# This will compile the code for the ARM architecture

# End of the Makefile