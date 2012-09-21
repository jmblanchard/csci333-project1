#include "VQueue.h"

VQueue::VQueue() {
    queue_ = new vector<int>();
}

VQueue::~VQueue() {
    delete queue_;
}

int VQueue::dequeue() {
    assert(size() != 0); // queue isn't empty
}

void VQueue::enqueue(int item) {
}

int VQueue::size() {
}

bool VQueue::isEmpty() {
}
