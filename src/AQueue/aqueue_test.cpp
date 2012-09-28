#include "AQueue.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  AQueue* aq = new AQueue(10);
  for (int i = 0; i < 20; i++){
    aq -> enqueue(i);
  }
  cout << aq -> size() << endl;
  for (int i = 0; i < 18; i++) {
    cout << aq -> dequeue() << endl;
  }
  cout << aq -> size() << endl;
  delete aq;
  return 0;  
}
