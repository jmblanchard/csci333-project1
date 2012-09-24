#include "AQueue/AQueue.h"
#include "LQueue/LQueue.h"
#include "LLQueue/LLQueue.h"
#include <iostream>

int main() {
    AQueue aqueue(5);
    LQueue *lqueue = new LQueue();
    LLQueue *llqueue = new LLQueue();

    for (int i = 0; i < 20; ++i) {
        aqueue.enqueue(i);
        lqueue->enqueue(i);
        llqueue->enqueue(i);
    }

    std::cout << "LLQueue size " << llqueue->size() << std::endl;

    for (int i = 0; i < 20; ++i) {
        std::cout << aqueue.dequeue() << std::endl;
        std::cout << lqueue->dequeue() << std::endl;
        std::cout << llqueue->dequeue() << std::endl;
    }

    std::cout << "LLQueue size " << llqueue->size() << std::endl;

    delete lqueue;
    delete llqueue;

    return 0;
}
