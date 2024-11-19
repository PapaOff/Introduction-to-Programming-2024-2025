#include <iostream>
#include <cmath>

int main() {
   double a, b, c;

   std::cout << "Please enter a: ";
   std::cin >> a;
   std::cout << "Please enter b: ";
   std::cin >> b;
   std::cout << "Please enter c: ";
   std::cin >> c;
   if (a == 0) {
       if (b == 0 && c == 0) {
           std::cout << "INF" << std::endl;
       } else if(b != 0 && c != 0){
           std::cout << "x = " << (-c / b) << std::endl;
       } else{
           std::cout << "No solution" << std::endl;
       }
   } else {
       int D = (b * b) - (4 * a * c);
       if(D > 0) {
           double x1, x2;
           x2 = (-b - sqrt(D)) / (2 * a);
           x1 = (-b + sqrt(D)) / (2 * a);
           std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
       }
       else if (D == 0) {
           std::cout << "x1 = x2 = " << -b / (2 * a) << std::endl;
       }
       else {
           std::cout << "No solution!" << std::endl;
       }
   }
}