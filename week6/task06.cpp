#include <iostream>

int main() {
    int number, reversedNumber = 0, originalNumber;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    originalNumber = number;

    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    if (reversedNumber == originalNumber) {
        std::cout << "The number " << originalNumber << " is a palindrome." << std::endl;
    } else {
        std::cout << "The number " << originalNumber << " is not a palindrome." << std::endl;
    }

    return 0;
}
