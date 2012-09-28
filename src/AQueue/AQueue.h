#ifndef __AQUEUE_H__
#define __AQUEUE_H__

class AQueue {

 private:
  int* theQueue; // array that holds the elements of the queue
  int front;  // references the first element in the queue
  int back;  // references the last element in the queue
  int numOfElements; // stores number of elements in the queue
  int capacity;  // stores the maximum queue size, its capacity 
  int initSize;  // stores the initial size of the queue
  
 public:
  AQueue(int maxSize);
  ~AQueue();
  int dequeue();
  void enqueue(int value);
  int size();
  bool isEmpty();
  
};

#endif
