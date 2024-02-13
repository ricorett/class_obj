#include "counter.hpp"
  Counter::Counter(int start_count){
    counter = start_count;
  };

int Counter::count_plus() { return ++counter; }

int Counter::count_minus() { return --counter; }

int Counter::get_count() { return counter; }


