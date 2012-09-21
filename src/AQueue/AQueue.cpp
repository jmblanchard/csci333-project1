#include "AQueue.h"
#include <assert.h>

AQueue::AQueue(int initial_capacity) {
    capacity_ = initial_capacity;
    queue_ = new int[capacity_];
    size_ = 0;
    front_ = 0;
    back_ = 0;
}

AQueue::~AQueue() {
    size_ = 0;
    capacity_ = 0;
    front_ = 0;
    back_ = 0;

    delete[] queue_;
    queue_ = 0;
}

void AQueue::enqueue(int item) {
    if (size_ == capacity_ && !isEmpty()) {
        capacity_ *= 2; // double capacity
        int *new_queue = new int[capacity_];

        // copy queue into new_queue
        for (int i = 0; i != size_; ++i) {
            new_queue[i] = queue_[(front_+i) % size_];
        }

        delete[] queue_; // replace with new queue
        queue_ = new_queue;
        front_ = 0; // reset the front and back locations
        back_ = size_;
    }

    assert(size_ != capacity_); // our queue should not be full

    queue_[back_ % capacity_] = item;
    ++back_;
    ++size_;
}

// TODO: implement
int AQueue::dequeue() {
    assert(size_ > 0);

    int item = queue_[front_ % capacity_];
    ++front_;
    --size_;

    return item;
}

int AQueue::size() {
    return size_;
}

bool AQueue::isEmpty() {
    return size_ == 0;
}
