#include <iostream>

int main() {
  int age;
  bool has20Bucks;
  bool isDrugged;
  bool isVIP;

  std::cin >> age >> has20Bucks >> isDrugged >> isVIP;

  std::cout << ((isVIP || (age >= 18 || age >= 15 && has20Bucks)) && !isDrugged ? "Can enter!" : "Cannot enter!") << std::endl;
}