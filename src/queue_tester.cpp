#include "AQueue/AQueue.h"
#include "LQueue/LQueue.h"
#include "LLQueue/LLQueue.h"
#include <iostream>
#include <time.h>

#define NUM_ITER 10000000

int main() {
    AQueue aqueue(5);
    LQueue *lqueue = new LQueue();
    LLQueue *llqueue = new LLQueue();

    int start, end, elapsed;
    double time;

    start = clock();
    for (int i = 0; i < NUM_ITER; ++i) {
        aqueue.enqueue(i);
    }
    end = clock();
    elapsed = end - start;
    time = (double)elapsed/CLOCKS_PER_SEC;
    std::cout << "AQueue enqueue timing: " << time << std::endl;

    start = clock();
    for (int i = 0; i < NUM_ITER; ++i) {
        lqueue->enqueue(i);
    }
    end = clock();
    elapsed = end - start;
    time = (double)elapsed/CLOCKS_PER_SEC;
    std::cout << "LQueue enqueue timing: " << time << std::endl;


    start = clock();
    for (int i = 0; i < NUM_ITER; ++i) {
        llqueue->enqueue(i);
    }
    end = clock();
    elapsed = end - start;
    time = (double)elapsed/CLOCKS_PER_SEC;
    std::cout << "LLQueue enqueue timing: " << time << std::endl;

    start = clock();
    for (int i = 0; i < NUM_ITER; ++i) {
        aqueue.dequeue();
    }
    end = clock();
    elapsed = end - start;
    time = (double)elapsed/CLOCKS_PER_SEC;
    std::cout << "AQueue dequeue timing: " << time << std::endl;

    start = clock();
    for (int i = 0; i < NUM_ITER; ++i) {
        lqueue->dequeue();
    }
    end = clock();
    elapsed = end - start;
    time = (double)elapsed/CLOCKS_PER_SEC;
    std::cout << "LQueue dequeue timing: " << time << std::endl;

    start = clock();
    for (int i = 0; i < NUM_ITER; ++i) {
        llqueue->dequeue();
    }
    end = clock();
    elapsed = end - start;
    time = (double)elapsed/CLOCKS_PER_SEC;
    std::cout << "LLQueue dequeue timing: " << time << std::endl;

    delete lqueue;
    delete llqueue;

    return 0;
}
