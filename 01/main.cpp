#include "calculator.hpp"

int main() {
  Calculator calc;

  int num1{0}, num2{0};
  while (1) {
    while (true) {
      std::cout << "Введите num: ";
      std::cin >> num1;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Введите num 2: ";
      std::cin >> num2;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      if ((calc.set_num1(num1) == true) && (calc.set_num2(num2) == true)) {
        break;
      }
      std::cout << "INCORRECT INPUT DATA, TRY AGAIN!" << std::endl;
    }

    std::cout << "num1 + num2: " << calc.add() << std::endl;
    std::cout << "num1 * num2: " << calc.multiply() << std::endl;
    std::cout << "num1 - num2: " << calc.subtract_1_2() << std::endl;
    std::cout << "num2 - num1: " << calc.subtract_2_1() << std::endl;
    std::cout << "num1 / num2: " << calc.divide_1_2() << std::endl;
    std::cout << "num2 / num1: " << calc.divide_2_1() << std::endl;
  }

  return 0;
}
