#ifndef VQUEUE_H_
#define VQUEUE_H_

#include <vector>

class VQueue {
  private:
    vector<int> *queue_;

  public:
    VQueue();
    ~VQueue();

    int dequeue();
    void enqueue(int item);
    int size();
    bool isEmpty();
};
#endif
