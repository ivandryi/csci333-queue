#ifndef __SLQUEUE_H__
#define __SLQUEUE_H__

#include <iostream>
#include <list>

class SLQueue {
 private:
  int numOfElements;
  std::list<int> slqueue;
 public:
  SLQueue();
  //  ~SLQueue();
  int dequeue();
  void enqueue(int value);
  int size();
  bool isEmpty();  
};

#endif
