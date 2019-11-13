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

bool TestSuite::testDequeue(Queue q)
{
  try
  {
    q.dequeue();
    return true;
  }
  catch(std::runtime_error rte)
  {
    rte.what();
    return false;
  }
}

// int TestSuite::testPeekFront()
// {
//
// }
