#include "gtest/gtest.h"
#include "../src/AQueue/AQueue.h"
#include "../src/LLQueue/LLQueue.h"
// #include "../src/SLQueue/SLQueue.h"

TEST(LLQueueTest, Enqueue){
  LLQueue* llq = new LLQueue();
  llq -> enqueue(3);
  EXPECT_EQ(3, llq -> dequeue());
  delete llq;
}

TEST(AQueueTest, Enqueue){
  AQueue* aq = new AQueue(3);
  aq -> enqueue(3);
  EXPECT_EQ(3, aq -> dequeue());
  delete aq;
}
