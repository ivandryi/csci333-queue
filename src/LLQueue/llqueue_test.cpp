#include "LLQueue.h"
#include <iostream>

using std::cout;
using std::endl;

int main(){
  LLQueue* llq = new LLQueue();
  llq -> enqueue(1);
  llq -> enqueue(2);
  cout << llq -> size() << endl;
  cout <<  llq -> dequeue() << endl;
  cout << llq -> dequeue() << endl;
  cout << llq -> size() << endl;
  return 0;
}
