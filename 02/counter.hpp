#ifndef COUNTER_HPP
#define COUNTER_HPP

#include <iostream>
#include <string>

class Counter {
public:
  Counter(int start_count){
    counter = start_count;
  };
  int count_plus();
  int count_minus();
  int get_count();
  void set_count(int start_count);

private:
  int counter;
};

#endif // COUNTER_HPP
