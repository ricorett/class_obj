#include "counter.hpp"

int Counter::count_plus() { return ++counter; }

int Counter::count_minus() { return --counter; }

int Counter::get_count() { return counter; }

void Counter::set_count(int start_count) { counter = start_count; }