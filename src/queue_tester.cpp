#include "AQueue/AQueue.h"
#include "LQueue/LQueue.h"
#include <iostream>

int main() {
    AQueue aqueue(5);
    LQueue lqueue();

    for (int i = 0; i < 20; ++i) {
        aqueue.enqueue(i);
        lqueue.enqueue(i);
    }

    for (int i = 0; i < 20; ++i) {
        std::cout << aqueue.dequeue() << std::endl;
        std::cout << lqueue.dequeue() << std::endl;
    }

    return 0;
}
