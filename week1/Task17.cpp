#include <iostream>

int main() {
    double radius;
    const double PI = 3.14159265;

    std::cout << "Enter the radius: ";
    std::cin >> radius;

    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    std::cout << "Circumference: " << circumference << std::endl;
    std::cout << "Area: " << area << std::endl;

    return 0;
}
