#include <iostream>

int main() {
    bool isRaining, isCloudy, hasHood;

    // Set boolalpha to display boolean values as true/false
    std::cout << "Is it raining? (true for yes, false for no): ";
    std::cin >> std::boolalpha >> isRaining;

    std::cout << "Is it cloudy? (true for yes, false for no): ";
    std::cin >> std::boolalpha >> isCloudy;

    std::cout << "Do you have a hood? (true for yes, false for no): ";
    std::cin >> std::boolalpha >> hasHood;

    bool takeUmbrella = (isRaining || isCloudy) && !hasHood;

    // Using ternary operator:
    // std::cout << (takeUmbrella ? "Take an umbrella!" : "Don't take an umbrella!") << std::endl;

    // Using if/else:
    if (takeUmbrella) {
      std::cout << "Take an umbrella!" << std::endl;
    } 
    else {
      std::cout << "Don't take an umbrella!" << std::endl;
    }

    return 0;
}
