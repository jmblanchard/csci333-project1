BUILD = ../build

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -pedantic

all: main AQueue.o LQueue.o

main: queue_tester.cpp AQueue/AQueue.o LQueue/LQueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main queue_tester.cpp AQueue/AQueue.o LQueue/LQueue.o

AQueue.o: AQueue/AQueue.h AQueue/AQueue.cpp
	$(CPP) $(CPPFLAGS) -c AQueue/AQueue.cpp

LQueue.o: LQueue/LQueue.h LQueue/LQueue.cpp
	$(CPP) $(CPPFLAGS) -c LQueue/LQueue.cpp

clean:
	rm -f AQueue/*.o
	rm -f LQueue/*.o
	rm -f *.o
	rm -f $(BUILD)/main
