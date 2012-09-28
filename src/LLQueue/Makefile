BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

mainll: llqueue_test.cpp LLQueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/mainll llqueue_test.cpp LLQueue.o

LLQueue.o: LLQueue.h LLQueue.cpp
	$(CPP) $(CPPFLAGS) -c LLQueue.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/mainll