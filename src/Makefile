BUILD = ../build

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -pedantic

all: main AQueue.o LQueue.o Node.o LLQueue.o

main: queue_tester.cpp AQueue/AQueue.o LQueue/LQueue.o LLQueue/Node.o LLQueue/LLQueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main queue_tester.cpp AQueue/AQueue.o LQueue/LQueue.o LLQueue/Node.o LLQueue/LLQueue.o

AQueue.o: AQueue/AQueue.h AQueue/AQueue.cpp
	$(CPP) $(CPPFLAGS) -c AQueue/AQueue.cpp

LQueue.o: LQueue/LQueue.h LQueue/LQueue.cpp
	$(CPP) $(CPPFLAGS) -c LQueue/LQueue.cpp

Node.o: LLQueue/Node.h LLQueue/Node.cpp
	$(CPP) $(CPPFLAGS) -c LLQueue/Node.cpp

LLQueue.o: LLQueue/Node.o LLQueue/LLQueue.h LLQueue/LLQueue.cpp
	$(CPP) $(CPPFLAGS) -c LLQueue/LLQueue.cpp

clean:
	rm -f AQueue/*.o
	rm -f LQueue/*.o
	rm -f LLQueue/*.o
	rm -f *.o
	rm -f $(BUILD)/main
