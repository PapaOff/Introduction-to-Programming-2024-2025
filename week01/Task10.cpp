#include <iostream>

int main() {
    double x;
    double a;
    double b;

    std::cin >> x >> a >> b;

    std::cout << std::boolalpha << (x >= a && x <= b) << std::endl;

    return 0;
}
