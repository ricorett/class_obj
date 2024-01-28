#include "counter.hpp"

int main() {

  Counter first_count;

  std::string input;
  int start_count = 0;
  std::cout
      << "Вы хотите задать начальное значение счётчика? Введите да или нет "
      << std::endl;
  while (input != "да" || input != "нет") {

    std::cin >> input;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (input == "да") {
      std::cout << "Введите начальное значение: ";
      std::cin >> start_count;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

      first_count.set_count(start_count);
      break;

    } else if (input == "нет") {

      start_count = 1;
      first_count.set_count(start_count);
      break;
    } else {
      std::cout << "Error Input. Try Again" << std::endl;
    }
  }

  char input_comand;

  while (input_comand != 'x') {
    std::cout << "Введите команду ('+', '-', '=' или 'x'): " << std::endl;

    std::cin >> input_comand;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    switch (input_comand) {
    case ('+'):
      first_count.count_plus();
      break;
    case ('-'):
      first_count.count_minus();
      break;
    case ('='):
      start_count = first_count.get_count();
      std::cout << start_count << std::endl;
      break;
    case ('x'):
      exit(0);
      break;
    default:
      std::cout << "Invalid comand. Try again" << std::endl;
    }
  }
  return 0;
}
