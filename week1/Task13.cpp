#include <iostream>

int main() {
    double length = 5.4;
    double width = 7.9;

    double perimeter = 2 * (length + width);
    double area = length * width;

    std::cout << "Perimeter: " << perimeter << std::endl;
    std::cout << "Area: " << area << std::endl;

    return 0;
}
