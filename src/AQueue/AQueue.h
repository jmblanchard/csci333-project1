#ifndef AQUEUE_H_
#define AQUEUE_H_

class AQueue {
  private:
    int *queue_;
    int size_, capacity_;
    int front_, back_;

  public:
    AQueue(int initial_capacity=10);
    ~AQueue();

    void enqueue(int item);
    int dequeue();
    int size();
    bool isEmpty();
};

#endif
