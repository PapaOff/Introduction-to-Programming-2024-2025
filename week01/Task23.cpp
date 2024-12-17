#include <iostream>

int main() {
    long long creditCardNumber; // Don't get scared by this, but think why if we use 'int' the program won't work correctly.
    std::cin >> creditCardNumber;

    int lastFourDigits = creditCardNumber % 10000;

    std::cout << "XXXXXXXXXXXX" << lastFourDigits << std::endl;

    return 0;
}
