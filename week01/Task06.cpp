#include <iostream>

int main() {
    int number;
    std::cout << "Enter 3 digit number: ";
    std::cin >> number;

    int firstDigit = number % 10;
    int secondDigit = (number / 10) % 10;
    int thirdDigit = number / 100;



    int sum = firstDigit + secondDigit + thirdDigit;
    int product = firstDigit * secondDigit * thirdDigit;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}
