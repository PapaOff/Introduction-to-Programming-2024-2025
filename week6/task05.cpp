#include <iostream>

int main() {
    int number;
    std::cin >> number;

    int sum = 0;

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    std::cout << "The sum of the digits is: " << sum << std::endl;

    return 0;
}
