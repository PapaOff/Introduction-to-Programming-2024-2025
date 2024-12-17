#include <iostream>

int main() {
    double leva;
    const double exchangeRateDollar = 1.76;  // don't worry about 'const', we will talk about it
    const double exchangeRateEuro = 1.95;    // don't worry about 'const', we will talk about it

    std::cin >> leva;

    double dollars = leva / exchangeRateDollar;
    double euros = leva / exchangeRateEuro;

    std::cout << "Dollars: " << dollars << std::endl;
    std::cout << "Euros: " << euros << std::endl;

    return 0;
}
