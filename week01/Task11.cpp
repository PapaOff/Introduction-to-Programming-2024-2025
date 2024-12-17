#include <iostream>

int main() {
    char input;
    std::cin >> input;

    if (input >= '0' && input <= '9') {
        std::cout << input << " - number - " << (input - '0') + 1 << std::endl; // Note how we convert char to int. Check out ASCII table if you need.
    } else if (input >= 'a' && input <= 'z') {
        std::cout << input << " - lowercase letter - " << (input - 32) << std::endl;
    } else if (input >= 'A' && input <= 'Z') {
        std::cout << input << " - uppercase letter - " << (input +32) << std::endl;
    }

    return 0;
}
