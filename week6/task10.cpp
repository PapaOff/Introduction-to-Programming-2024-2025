#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= std::sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number <= 2) {
        std::cout << "The number must be greater than 2 to be a sum of two primes." << std::endl;
        return 0;
    }

    std::cout << "The number " << number << " can be written as the sum of the following pairs of prime numbers:" << std::endl;

    for (int i = 2; i <= number / 2; i++) {
        if (isPrime(i) && isPrime(number - i)) {
            std::cout << i << " + " << number - i << std::endl;
        }
    }

    return 0;
}
