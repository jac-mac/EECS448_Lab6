#ifndef _TEST_SUITE_H
#define _TEST_SUITE_H

#include "Queue.h"

class TestSuite : public Queue
{
  private:
  Queue* testQ;


  public:
  TestSuite();

  bool testisEmpty();

};
#endif
