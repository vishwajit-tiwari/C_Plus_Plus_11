# Makefile for the autoWithPointersAndNew project

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: autoWithPointersAndNew

autoWithPointersAndNew: autoWithPointersAndNew.o 
	$(CC) -o autoWithPointersAndNew autoWithPointersAndNew.o 

autoWithPointersAndNew.o: autoWithPointersAndNew.cpp
	$(CC) -c -o autoWithPointersAndNew.o autoWithPointersAndNew.cpp

clean:
	rm -rf *.o autoWithPointersAndNew 

# Run the following command for cross-compilation:
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++
# This will compile the code for the ARM architecture

# End of the Makefile