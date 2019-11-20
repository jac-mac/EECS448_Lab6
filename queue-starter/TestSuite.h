#ifndef _TEST_SUITE_H
#define _TEST_SUITE_H

#include "Queue.h"

class TestSuite
{
  private:
  Queue* testQ;
  
  
  public:
  TestSuite();
  
  bool testEmpty();
  void qEnqueue(int num);
  void qDequeue();
  bool testPeek(int num);
  bool testDequeue();
};
#endif
