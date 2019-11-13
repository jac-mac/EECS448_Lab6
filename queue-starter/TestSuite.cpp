#include "TestSuite.h"

TestSuite::TestSuite()
{
  testQ = new Queue();
}

bool TestSuite::testisEmpty()
{
  return(this->testQ->isEmpty() && m_front == nullptr && m_back == nullptr);
}

void TestSuite::testEnqueue()
{
  this->testQ->enqueue(1);
  //return(m_front && m_back != nullptr);
}

void TestSuite::testDequeue()
{
  try
  {
    this->testQ->dequeue();
  }
  catch(std::runtime_error rte)
  {
    rte.what();
  }
}
