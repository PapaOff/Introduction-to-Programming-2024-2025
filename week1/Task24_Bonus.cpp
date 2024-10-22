#include <iostream>
#include <cmath>

int main() {
    double num1;
    double num2;

    std::cin >> num1 >> num2;

    double roundedUp = ceil(num1 * 100) / 100;
    double roundedDown = floor(num2 * 100) / 100;

    double result = roundedUp + roundedDown;

    std::cout << round(result) << std::endl;

    return 0;
}
