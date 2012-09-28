#include <iostream>
#include <ctime>
#include "../AQueue/AQueue.h"
#include "../LLQueue/LLQueue.h"
#include "../SLQueue/SLQueue.h"

using std::cout;
using std::endl;

int main() {
  int start, end, elapsed;
  double seconds;
  long numOfElements = 9999999;

  start = clock();
  AQueue* aq = new AQueue(10);
  for (long i = 0; i < numOfElements; i++){
    aq -> enqueue(i);    
  }
  for (long i = 0; i < numOfElements; i++) {
    aq -> dequeue();
  }
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  cout << "To implement enqueue and dequeue of " << numOfElements << " elements for array-based queue takes " << seconds << " seconds " << endl;

  start = clock();
  LLQueue* llq = new LLQueue();
  for (long i = 0; i < numOfElements; i++) {
    llq -> enqueue(i);
  }
  for (long i = 0; i < numOfElements; i++) {
    llq -> dequeue();
  }
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  cout << "To implement enqueue and dequeue of " << numOfElements << " elements for linked list based queue takes " << seconds << " seconds" << endl;

  start = clock();
  SLQueue slq = SLQueue();
  for (long i = 0; i < numOfElements; i++){
    slq.enqueue(i);
  }
  for (long i = 0; i < numOfElements; i++) {
    slq.dequeue();
  }
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  cout << "To implement enqueue and dequeue of " << numOfElements << " elements for STL list based queue takes " << seconds << " seconds" << endl;
  return 0;
}
