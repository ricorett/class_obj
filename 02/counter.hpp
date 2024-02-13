#ifndef COUNTER_HPP
#define COUNTER_HPP

#include <iostream>
#include <string>
#include <limits>

class Counter {
public:
  Counter(int start_count);
  int count_plus();
  int count_minus();
  int get_count();

private:
  int counter;
};

#endif // COUNTER_HPP
