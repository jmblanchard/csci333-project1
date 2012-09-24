#include "LQueue.h"
#include <assert.h>

LQueue::LQueue() {
    queue_ = new std::list<int>();
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
    int front = queue_->front();
    queue_->pop_front();

    return front;
}

int LQueue::size() {
    return queue_->size();
}

bool LQueue::isEmpty() {
    return queue_->empty();
}
