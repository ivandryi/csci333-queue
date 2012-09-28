BUILD = ../../build
SRCA = ../AQueue
SRCLL = ../LLQueue
SRCSL = ../SLQueue
CPP = g++
CPPFLAGS = -Wall -Wextra

timing_test: timing_test.cpp $(SRCA)/AQueue.o $(SRCLL)/LLQueue.o $(SRCSL)/SLQueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/timing_test timing_test.cpp $(SRCA)/AQueue.o $(SRCLL)/LLQueue.o $(SRCSL)/SLQueue.o

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/timing_test

