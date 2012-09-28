#include "AQueue.h"
#include <iostream>
#include <assert.h>

AQueue::AQueue(int maxSize) {
  assert (maxSize > 0);
  initSize = maxSize;
  capacity = maxSize;
  numOfElements = 0;
  front = 0;
  back = 0;
  theQueue = new int [maxSize];
}

AQueue::~AQueue() {
  delete [] theQueue;
}

void AQueue::enqueue(int value){
  if (numOfElements == capacity) {
    capacity = capacity * 2;
    int* temp = new int[capacity];
    if (back < front) {
      for (int i = front; i < numOfElements; i++) {
	temp[i - front] = theQueue[i];
      }
      for (int i = 0; i <= back; i++){
	temp[i + back] = theQueue[i];
     }
    } else {
      for (int i = 0; i < numOfElements; i++){
	temp[i] = theQueue[i];
     }
   }
    front = 0;
    back = numOfElements;
    delete [] theQueue;
    theQueue = temp;
  }
  theQueue[back] = value; 
  back = (back + 1) % capacity;
  numOfElements++;    
}

int AQueue::dequeue(){
    assert (numOfElements != 0);
    int oldCapacity = capacity;
    if ((numOfElements <= 0.25 * capacity) && (capacity/2 > initSize))  {
      capacity = capacity / 2;
      int* temp = new int[capacity];
      if (back < front){
	for (int i = front; i < oldCapacity; i++) {
	  temp[i - front] = theQueue[i];
	}
	for (int i = 0; i <= back; i++ ){
	  temp[i + back] = theQueue[i];
	}
      }
      else {
	for (int i = front; i <= back; i++){
	  temp[i - front] = theQueue[i];
	} 
      }
      front = 0;
      back = numOfElements;
      delete [] theQueue;
      theQueue = temp;
    }
  int result = theQueue[front];
  front = (front + 1) % capacity;
  numOfElements--;
  return result;
}

int AQueue::size(){
  return numOfElements;
}

bool AQueue::isEmpty(){
  return (numOfElements == 0);
}
