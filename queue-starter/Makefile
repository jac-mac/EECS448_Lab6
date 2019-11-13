QueueDemo: main.o Queue.o TestSuite.o
	g++ -g -Wall -std=c++11 main.o Queue.o TestSuite.o -o QueueDemo

main.o: main.cpp
	g++ -g -std=c++11 -c main.cpp

TestSuite.o: TestSuite.h Queue.h TestSuite.cpp
	g++ -g -std=c++11 -c TestSuite.cpp

clean:
	rm main.o QueueDemo *~
