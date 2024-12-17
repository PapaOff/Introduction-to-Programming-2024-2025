#include <iostream>

int main() {
    int n;

    do {
      std::cout << "Enter the number of elements: ";
      std::cin >> n;
    } while (n <= 0);

    double sum = 0;
    int num, min, max;

    std::cout << "Enter " << n << " numbers: ";
    std::cin >> num;
    min = max = num;  // Valid syntax!

    sum += num;

    for (int i = 1; i < n; i++) {
        std::cin >> num;
        sum += num;

        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }

    double avg = sum / n;
    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;
    std::cout << "Avg: " << avg << std::endl;

    return 0;
}
