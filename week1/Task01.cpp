#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int lastDigit = number % 10;

    std::cout << std::boolalpha << (lastDigit % 2 == 0) << std::endl;

    return 0;
}
