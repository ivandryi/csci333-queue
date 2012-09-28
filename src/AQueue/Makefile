BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

mainA: aqueue_test.cpp AQueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/mainA aqueue_test.cpp AQueue.o

AQueue.o: AQueue.h AQueue.cpp
	$(CPP) $(CPPFLAGS) -c AQueue.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/mainA 