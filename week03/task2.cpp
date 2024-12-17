#include <iostream>

int main() {
    int n;
    std::cout << "Enter a natural number n: ";
    std::cin >> n;

    for (int i = 5; i < n; i += 5) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
