/**
*	@file main.cpp
*	@author John Gibbons
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "TestSuite.h"

void test1(TestSuite* t);
void test2(TestSuite* t);
void test3(TestSuite* t, int num);
void test4(TestSuite* t, int num);
void test5(TestSuite* t, int num);
void test6(TestSuite* t, int num);
void test7(TestSuite* t, int num);
void test8(TestSuite* t);
//

int main()
{
	TestSuite* test = new TestSuite;
	
	int val = 1;
	
	test1(test);
	test->qEnqueue(val);
	test2(test);
	test3(test, val);
	test->qEnqueue(2);
	test4(test, val);
	
	val = 3;
	test->qEnqueue(val);
	test5(test, val);
	
	test->qEnqueue(4);
	val = 2;
	test6(test, val);
	test7(test, 3);
	
	test->qDequeue();
	test->qDequeue();
	test->qDequeue();
	
	test8(test);
	test->qEnqueue(1);
	test->qEnqueue(2);
	
	
	
	
	return(0);
}

void test1(TestSuite* t)
{
	std::cout << "Test 1: Newly created Queue is empty: ";
	if(t->testEmpty())
		std::cout << "PASSED\n";
	else
		std::cout << "FAILED\n";
}

void test2(TestSuite* t)
{
	std::cout << "Test 2: Queue is NOT empty after an enqueue: ";
	if(t->testEmpty())
		std::cout << "PASSED\n";
	else
		std::cout << "FAILED\n";
}

void test3(TestSuite* t, int num)
{
	std::cout << "Test 3: Peeking a Queue of one item returns that item: ";
	if(t->testPeek(num))
		std::cout << "PASSED\n";
	else
		std::cout << "FAILED\n";
}

void test4(TestSuite* t, int num)
{
	std::cout << "Test 4: Peeking a Queue of more than one items returns the FRONT value: ";
	if(t->testPeek(num))
		std::cout << "PASSED\n";
	else
		std::cout << "FAILED\n";
}

void test5(TestSuite* t, int num)
{
	std::cout << "Test 5: Peeking a Queue returns the BACK value: ";
	if(t->testPeek(num))
		std::cout << "PASSED\n";
	else
		std::cout << "FAILED\n";
}

void test6(TestSuite* t, int num)
{
	std::cout << "Test 6: Dequeueing from a Queue removes the FRONT item: ";
	if(t->testDequeue())
	{
		if(t->testPeek(num))
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED*\n";
		}	
	}
	else
		std::cout << "FAILED\n";
}

void test7(TestSuite* t, int num)
{
	std::cout << "Test 7: Dequeueing froma a Queue removes the BACK item: ";
	
	if(t->testPeek(num))
	{
		std::cout << "PASSED\n";
	}
	else
	{
		std::cout << "FAILED*\n";
	}
}

void test8(TestSuite* t)
{
	std::cout << "Test 8: Dequeueing all items from a Queue makes it emtpy: ";
	if(t->testEmpty())
		std::cout << "PASSED\n";
	else
		std::cout << "FAILED\n";
}
