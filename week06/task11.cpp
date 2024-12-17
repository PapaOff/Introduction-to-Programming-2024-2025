#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= std::sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void printPrimeDivisors(int number) {
    bool first = true;

    for (int i = 2; i <= number; i++) {
        while (number % i == 0 && isPrime(i)) {
            if (!first) {
                std::cout << ", ";
            }
            std::cout << i;
            first = false;
            while (number % i == 0) {
                number /= i;
            }
        }
    }
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Prime divisors of " << number << " are: ";
    printPrimeDivisors(number);
    std::cout << std::endl;

    return 0;
}
