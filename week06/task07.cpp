#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    bool allUnique = true;

    while (number > 0) {
        int currentDigit = number % 10; 
        int tempNumber = number / 10;

        while (tempNumber > 0) {
            if (tempNumber % 10 == currentDigit) {
                allUnique = false;
                break;
            }
            tempNumber /= 10;
        }

        if (!allUnique) {
            break;
        }

        number /= 10;
    }

    std::cout << std::boolalpha << allUnique << std::endl;

    return 0;
}
