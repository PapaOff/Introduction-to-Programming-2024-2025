#include <iostream>

int main() {
    int a;
    int b;
    int c;

    std::cin >> a >> b >> c;

    std::cout << std::boolalpha << (a + b > c && a + c > b && b + c > a) << std::endl;

    return 0;
}
