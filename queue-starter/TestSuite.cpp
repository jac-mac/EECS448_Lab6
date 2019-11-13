#include "TestSuite.h"

TestSuite::TestSuite()
{
  //testQ = new Queue();
}

bool TestSuite::testIsEmpty(Queue q)
{
  return(q.isEmpty() && m_front == nullptr && m_back == nullptr);
}

bool TestSuite::testEnqueueAfterEmpty()
{
  if(m_front == m_back)
    return true;
  else
    return false;
}

bool TestSuite::testEnqueueAfterNotEmpty()
{
  if(m_front != m_back)
    return true;
  else
    return false;
}

bool TestSuite::testDequeueAfterNotEmpty(Queue q)
{
  try
  {
    q.dequeue();
  }
  catch(std::runtime_error rte)
  {
    return false;
  }
  return true;
}

bool TestSuite::testDequeueAfterEmpty()
{
  
}

// int TestSuite::testPeekFront()
// {
//
// }
