#include "LLQueue.h"
#include <assert.h>

LLQueue::LLQueue() {
    front_ = 0;
    back_ = 0;
    size_ = 0;
}

LLQueue::~LLQueue() {
    delete front_;
    delete back_;
    front_ = 0;
    back_ = 0;
    size_ = 0;
}

void LLQueue::enqueue(int value) {
    if (isEmpty()) {
        front_ = back_ = new Node(value);
    } else {
        back_->setNext(new Node(value));
        back_ = back_->getNext();
    }

    size_++;
}

int LLQueue::dequeue() {
    assert(!isEmpty());
    int value = front_->getValue();
    Node *temp = front_;
    front_ = front_->getNext();
    delete temp;
    
    --size_;
    if (isEmpty())
        back_ = 0;

    return value;
}

int LLQueue::size() {
    return size_;
}

bool LLQueue::isEmpty() {
    return size() == 0;
}
