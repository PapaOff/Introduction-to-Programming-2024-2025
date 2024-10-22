#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << std::boolalpha << (num1 % num2 == 0) << std::endl;

    return 0;
}
