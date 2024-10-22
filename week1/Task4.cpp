#include <iostream>

int main() {
    char ch;
    int num;
    std::cout << "Enter char:  ";
    std::cin >> ch;
    std::cout << "Enter number: ";
    std::cin >> num;

    bool result = (ch >= 'a' && ch <= 'z') && (num < 100);

    std::cout << std::boolalpha << result << std::endl;

    return 0;
}
