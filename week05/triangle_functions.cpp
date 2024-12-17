#include <iostream>
#include <cmath>

bool isTriangle (double a, double b, double c) {
    return ((a + b > c) && (c + b > a) && (a + c > b));
}

double getPerimeter (double a, double b, double c) {
    return a + b + c;
}

double getArea (double a, double b, double c) {
    double halfPerimeter = getPerimeter(a, b, c) / 2;
    return sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));
}

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;

  std::cout << std::boolalpha << "Is it a triangle: " << isTriangle(a, b, c) << std::endl;

  if (isTriangle(a, b, c)) {
    std::cout << "Area: " << getArea(a, b, c) << "\nPerimeter: " << getPerimeter(a, b, c) << std::endl;
  }
}