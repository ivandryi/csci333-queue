BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

mainsl: slqueue_test.cpp SLQueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/mainsl slqueue_test.cpp SLQueue.o

SLQueue.o: SLQueue.h SLQueue.cpp
	$(CPP) $(CPPFLAGS) -c SLQueue.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/mainsl