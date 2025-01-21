# Makefile for the autoWithIterators project

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g
endif

all: autoWithIterators

autoWithIterators: autoWithIterators.o
	$(CC) -o autoWithIterators autoWithIterators.o

autoWithIterators.o: autoWithIterators.cpp
	$(CC) -c -o autoWithIterators.o autoWithIterators.cpp 

clean:
	rm -f autoWithIterators *.o

# Run the following command for cross-compilation:
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++
# This will compile the code for the ARM architecture

# End of the Makefile
