#include "testSuite.h"
#include <iostream>

TestSuite::TestSuite()
{
  testQ = new Queue;
}

bool TestSuite::testEmpty()
{
  if(testq->isEmpty())
     return true;
  
  return false;
}

void TestSuite::qEnqueue(int num)
{
  testQ->enqueue(num);
}

bool TestSuite::testPeek(int num)
{
  if(testQ->peekFront() == num)
    return true;
  
  return false;
}

bool TestSuite::testDequeue()
{
  try
  {
    testQ->dequeue();
    return true;
  }
  catch(...)
  {
    return false;
  }
}

void TestSuite::qDequeue()
{
  try
  {
    testQ->dequeue();
  }
  catch(std::runtime_error& rte)
  {
    rte.what();
  }
}
