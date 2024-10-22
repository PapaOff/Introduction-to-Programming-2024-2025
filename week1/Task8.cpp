#include <iostream>

int main() {
    int a;
    int b;
    std::cin >> a >> b;

    if (a < 100 || a > 999 || b < 100 || b > 999) {
        return 1;
    }

    int a1 = a / 100;
    int a2 = (a / 10) % 10;
    int a3 = a % 10;

    int b1 = b / 100;
    int b2 = (b / 10) % 10;
    int b3 = b % 10;

    int sumA = a1 + a2 + a3;
    int productB = b1 * b2 * b3;

    if (sumA == productB) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
