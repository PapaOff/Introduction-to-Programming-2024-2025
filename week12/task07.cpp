#include <iostream>

void findPathForward(int n) {
    std::cout << n << " -> ";
    
    if (n == 1) {
        std::cout << "Done!" << std::endl;
        return;
    }
    
    if (n % 2 == 0) {
        findPathForward(n / 2);
    } else {
        findPathForward(n + 1);
    }
}

void findPathBackward(int n, int path[], int currentIndex) {
    path[currentIndex] = n;
    
    if (n == 1) {
        for (int i = currentIndex; i >= 0; i--) {
            std::cout << path[i];
            if (i > 0) std::cout << " -> ";
        }
        std::cout << " -> Done!" << std::endl;
        return;
    }
    
    if (n % 2 == 0) {
        findPathBackward(n / 2, path, currentIndex + 1);
    } else {
        findPathBackward(n + 1, path, currentIndex + 1);
    }
}

int main() {
    int number;
    std::cout << "Enter a positive number: ";
    std::cin >> number;
    
    std::cout << "\nForward recursion path:" << std::endl;
    findPathForward(number);
    
    std::cout << "\nBackward recursion path:" << std::endl;
    int path[100];  // Assuming we won't need more than 100 steps
    findPathBackward(number, path, 0);
    
    return 0;
}