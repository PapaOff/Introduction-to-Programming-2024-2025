#include <iostream>

int main() {
    int number;

    do {
        std::cout << "Enter a 4-digit number: ";
        std::cin >> number;
    } while (number < 1000 || number > 9999);

    int firstDigit = number / 1000;
    std::cout << std::boolalpha << (firstDigit % 2 != 0) << std::endl;

    return 0;
}
