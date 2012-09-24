#ifndef NODE_H_
#define NODE_H_

class Node {
  public:
    Node(int value);
    ~Node();

    Node *getNext();
    void setNext(Node *next);
    int getValue();

  private:
    Node *next_;
    int value_;
};

#endif
