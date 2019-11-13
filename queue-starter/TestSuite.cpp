#include "TestSuite.h"

TestSuite::TestSuite()
{
  testQ = new Queue();
}

bool TestSuite::testisEmpty()
{
  return(this->testQ->isEmpty() && m_front == nullptr && m_back == nullptr);
}
