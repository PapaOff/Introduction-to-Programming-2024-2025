#include <iostream>

int main() {
    int k;
    std::cin >> k;

    int currentNumber = 1;

    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << currentNumber << " ";
            currentNumber++;
        }
        std::cout << std::endl;
    }

    return 0;
}
