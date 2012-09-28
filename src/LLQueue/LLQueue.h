#ifndef __LLQUEUE_H
#define __LLQUEUE_H

class Node {
 private:
  int value;
  Node* next;
 public:
  Node(int val);
  int getValue();
  Node* getNext();
  void setNext(Node* n);
};

class LLQueue{
 private:
  Node* front;
  Node* back;
  int numOfElements;
 public:
  LLQueue();
  ~LLQueue();
  int dequeue();
  void enqueue(int val);
  int size();
  bool isEmpty();
};

#endif
