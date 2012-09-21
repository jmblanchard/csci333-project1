#include "AQueue/AQueue.h"
#include <iostream>

int main() {
    AQueue queue(5);

    for (int i = 0; i < 20; ++i) {
        queue.enqueue(i);
    }

    return 0;
}
