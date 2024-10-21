#include <iostream>

int main() {
    double x, y;

    std::cout << "Enter the coordinates of the point (x, y): ";
    std::cin >> x >> y;

    if (x > 0 && y > 0) {
        std::cout << "The point is located in the first quadrant." << std::endl;
    } else if (x < 0 && y > 0) {
        std::cout << "The point is located in the second quadrant." << std::endl;
    } else if (x < 0 && y < 0) {
        std::cout << "The point is located in the third quadrant." << std::endl;
    } else if (x > 0 && y < 0) {
        std::cout << "The point is located in the fourth quadrant." << std::endl;
    } else if (x == 0 && y != 0) {
        std::cout << "The point lies on the Y-axis." << std::endl;
    } else if (y == 0 && x != 0) {
        std::cout << "The point lies on the X-axis." << std::endl;
    } else {
        std::cout << "The point is at the origin (0, 0)." << std::endl;
    }

    return 0;
}
