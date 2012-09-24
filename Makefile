BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -pedantic

all: $(BUILD)/main $(TEST)/queue_test

$(BUILD)/main: $(SRC)/AQueue/AQueue.cpp $(SRC)/AQueue/AQueue.o $(SRC)/LQueue/LQueue.cpp $(SRC)/LQueue/LQueue.o $(SRC)/LLQueue/LLQueue.o
	cd $(SRC); $(MAKE) all

$(TEST)/queue_test: $(TEST)/Queue.cpp $(SRC)/AQueue/AQueue.o $(SRC)/LQueue/LQueue.o $(SRC)/LLQueue/LLQueue.o
	cd $(TEST); $(MAKE) queue_test

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean
