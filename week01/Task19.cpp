#include <iostream>

int main() {
    int a;
    int b;

    std::cin >> a >> b;

    int temp = a;
    a = b;
    b = temp;

    // Without using 3rd variable
    /*a = a + b; 
    b = a - b;
    a = a - b;*/

    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}
