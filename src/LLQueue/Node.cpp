#include "Node.h"

Node::Node(int value) {
    value_ = value;
    next_ = 0;
}

Node::~Node() {
    next_ = 0;
    value_ = 0;
}

Node *Node::getNext() {
    return next_;
}

void Node::setNext(Node *next) {
    next_ = next;
}

int Node::getValue() {
    return value_;
}
