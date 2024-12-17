#include <iostream>

int main() {
  int month, year;

  std::cin >> month >> year;

  bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

  switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: std::cout << 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11: std::cout << 30;
        break;
    case 2: std::cout << 28 + isLeap;
        break;
    default: std::cout << "Not a month";
        break;
  }
  std::cout << std::endl;
}