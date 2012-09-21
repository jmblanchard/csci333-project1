#ifndef LQUEUE_H_
#define LQUEUE_H_

#include <list>

class LQueue {
  public:
    LQueue();
    ~LQueue();

    void enqueue(int item);
    int dequeue();
    int size();
    bool isEmpty();

  private:
    list<int> *queue_;
};

#endif
