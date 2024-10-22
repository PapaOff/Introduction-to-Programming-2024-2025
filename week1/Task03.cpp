#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;

    int product = a * b;
    int lastDigit = product % 10;
    bool isEven = lastDigit % 2 == 0;

    std::cout << product << ", " << lastDigit << " - " << (isEven ? "even" : "odd") << std::endl;

    return 0;
}
