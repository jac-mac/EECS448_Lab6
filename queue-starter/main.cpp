/**
*	@file main.cpp
*	@author John Gibbons
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "TestSuite.h"


bool testEmpty(Queue q, TestSuite t);
void test1(Queue q, TestSuite test);

bool testEAE(Queue q, TestSuite t);
void test2(Queue q, TestSuite test);

bool testEANE(Queue q, TestSuite t);
void test3(Queue q, TestSuite test);

bool testNotEmpty(Queue q, TestSuite t);
void test4(Queue q, TestSuite test);

int main()
{
	Queue q;
	TestSuite test;

	test1(q, test);
	test2(q, test);
	test3(q, test);
	test4(q, test);


	return(0);
}


bool testEmpty(Queue q, TestSuite t)
{
	if(t.testIsEmpty(q))
		return true;
	else
		return false;
}

void test1(Queue q, TestSuite test)
{
	std::cout << "Test 1: Newly created queue is empty: ";
	if(testEmpty(q, test))
		std::cout << "PASSED\n";
	else
		std::cout << "FAILED\n";
}

bool testEAE(Queue q, TestSuite t)
{
	q.enqueue(1);
	if(t.testEnqueueAfterEmpty())
		return true;
	else
		return false;
}

void test2(Queue q, TestSuite test)
{
	std::cout << "Test 2: An empty queue enqueues correctly: ";
	if(testEAE(q, test))
		std::cout << "PASSED\n";
	else
		std::cout << "FAILED\n";
}

bool testEANE(Queue q, TestSuite t)
{
	q.enqueue(1);
	if(t.testEnqueueAfterNotEmpty())
		return true;
	else
		return false;
}

void test3(Queue q, TestSuite test)
{
	std::cout << "Test 3: A non-empty queue enqueues correctly: ";
	if(testEANE(q, test))
		std::cout << "PASSED\n";
	else
		std::cout << "FAILED\n";
}

bool testNotEmpty(Queue q, TestSuite t)
{
	if(!t.testIsEmpty(q))
		return true;
	else
		return false;
}

void test4(Queue q, TestSuite test)
{
	std::cout << "Test 4: A Queue is NOT empty after enqueues: ";
	if(testNotEmpty(q, test))
		std::cout << "PASSED\n";
	else
		std::cout << "FAILED\n";
}
