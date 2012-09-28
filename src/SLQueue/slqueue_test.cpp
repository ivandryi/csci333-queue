#include "SLQueue.h"
#include <iostream>

using std::cout;
using std::endl;

int main(){
  SLQueue slq = SLQueue();
  slq.enqueue(1);
  slq.enqueue(2);
  slq.enqueue(3);
  cout << slq.size() << " the size after adding 3 elements" <<endl;
  cout << slq.dequeue() << " should be 1 " << endl;
  cout << slq.dequeue() << "should be 2" << endl;
  cout << slq.size() << " should be 1, new size " << endl;
  
  return 0;
}
