#include <iostream>

int main() {
    int x, n;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter n: ";
    std::cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (x + i);
    }

    std::cout << "The sum of the series is: " << sum << std::endl;
    return 0;
}
