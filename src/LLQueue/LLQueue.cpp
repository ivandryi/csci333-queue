#include "LLQueue.h"
#include <iostream>
#include <assert.h>

Node::Node(int val){
  value = val;
  next = 0;
}

int Node::getValue(){
  return value;
}

Node* Node::getNext(){
  return next;
}

void Node::setNext(Node* n){
  next = n;
}

LLQueue::LLQueue(){
  front = 0;
  back = 0;
  numOfElements = 0;
}

LLQueue::~LLQueue(){
  while (numOfElements > 0)
    dequeue();
}

void LLQueue::enqueue(int val) {
  Node* temp = new Node(val);
  temp -> setNext(0);
  if (numOfElements == 0){ // if the queue is empty
    front = temp;
    back = temp;
  }
  else {
    back -> setNext(temp);
    back = temp;
  }
  numOfElements++;
}

int LLQueue::dequeue(){
  assert (numOfElements != 0);
  Node* temp = front;
  int result = temp -> getValue();
  front = temp -> getNext();
  delete temp;
  numOfElements--;
  return result;
}

int LLQueue::size(){
  return numOfElements;
}

bool LLQueue::isEmpty(){
  return (numOfElements == 0);
}
