#include <iostream>
#include <cmath>

int main() {
    int firstNumber;
    int secondNumber;

    std::cin >> firstNumber >> secondNumber;

    if (firstNumber < 10 || firstNumber > 99 || secondNumber < 10 || secondNumber > 99) {
        return -1;
    }

    int firstDigitFirstNumber = firstNumber / 10;
    int secondDigitFirstNumber = firstNumber % 10;
    int firstDigitSecondNumber = secondNumber / 10;
    int secondDigitSecondNumber = secondNumber % 10;

    if (secondDigitFirstNumber > firstDigitFirstNumber && 
        firstDigitSecondNumber > secondDigitFirstNumber && 
        secondDigitSecondNumber > firstDigitSecondNumber) {
        std::cout << "Yes" << endl;
    } else {
        std::cout << "No" << endl;
    }

    return 0;
}
