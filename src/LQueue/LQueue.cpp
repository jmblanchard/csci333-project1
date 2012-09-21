#include "LQueue.h"
#include <assert.h>

LQueue::LQueue() {
    queue_ = new list<int>();
}

LQueue::~LQueue() {
    delete queue_;
    queue_ = 0;
}

void LQueue::enqueue(int item) {
    queue_->push_back(item);
}

int LQueue::dequeue() {
    assert(!isEmpty());
    return queue_->pop_front();
}

int LQueue::size() {
    return queue_->size();
}

bool LQueue::isEmpty() {
    return queue_->empty();
}
