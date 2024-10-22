#include <iostream>

int main() {
    char ch;
    int num;
    std::cout << "Enter char: ";
    std::cin >> ch;
    std::cout << "Enter number: ";
    std::cin >> num;

    bool isUppercase = (ch >= 'A' && ch <= 'Z');
    bool isDivisible = (num % 2 == 0) && (num % 3 == 0) && (num % 5 == 0);

    bool result = isUppercase || isDivisible;

    std::cout << std::boolalpha << result << std::endl;

    return 0;
}
