BUILD = ../build

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -pedantic

all: main AQueue.o

main: queue_tester.cpp AQueue/AQueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main queue_tester.cpp AQueue/AQueue.o

AQueue.o: AQueue/AQueue.h AQueue/AQueue.cpp
	$(CPP) $(CPPFLAGS) -c AQueue/AQueue.cpp

clean:
	rm -f AQueue/*.o
	rm -f *.o
	rm -f $(BUILD)/main
