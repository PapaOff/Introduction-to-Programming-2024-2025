#include <iostream>

int main() {
    int a;
    int b;

    std::cin >> a >> b;

    int minimum = 0;
    int maximum = 0;

    if (a < b) {
        minimum = a;
        maximum = b;
    } else {
        minimum = b;
        maximum = a;
    }

    std::cout << "Minimum: " << minimum << std::endl;
    std::cout << "Maximum: " << maximum << std::endl;

    return 0;
}
