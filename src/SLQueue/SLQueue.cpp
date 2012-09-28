#include "SLQueue.h"
#include <iostream>
#include <assert.h>

SLQueue::SLQueue(){
  numOfElements = 0;
}


int SLQueue::dequeue(){
  assert (numOfElements != 0);
  int result = slqueue.front();
  slqueue.pop_front();
  numOfElements--;
  return result;
}

void SLQueue::enqueue(int value){

  slqueue.push_back(value);
  numOfElements++;
}

int SLQueue::size(){
  return numOfElements;
}

bool SLQueue::isEmpty(){
  return (numOfElements == 0);
}
