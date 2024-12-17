#include <iostream>
#include <cmath>

int main() {
    double a;
    double b;
    double c;

    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        std::cout << "No real roots" << std::endl;
    } else {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);

        std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }

    return 0;
}
