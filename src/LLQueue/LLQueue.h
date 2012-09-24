#ifndef LLQUEUE_H_
#define LLQUEUE_H_

#include "Node.h"

class LLQueue {
  public:
    LLQueue();
    ~LLQueue();

    void enqueue(int value);
    int dequeue();
    int size();
    bool isEmpty();

  private:
    Node *front_;
    Node *back_;
    int size_;
};

#endif
