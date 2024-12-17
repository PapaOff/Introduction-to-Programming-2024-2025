#include <iostream>

int main() {
    std::cout << "Numbers divisible by both 2 and 5 in the interval (0,100]: ";
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0 && i % 5 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
