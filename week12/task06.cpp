#include <iostream>

void drawLine(int size) {
    for(int i = 0; i < size; i++) {
        std::cout << '*';
    }
    std::cout << std::endl;
}

void drawPattern(int size, bool isExpanding) {
    if (size <= 0) return;
    
    if (isExpanding) {
        drawLine(size);
    }
    
    drawPattern(size - 1, isExpanding);
    
    if (!isExpanding) {
        drawLine(size);
    }
}

int main() {
    int size;
    std::cout << "Enter pattern size: ";
    std::cin >> size;
    
    std::cout << "\nExpanding pattern:" << std::endl;
    drawPattern(size, true);
    
    std::cout << "\nShrinking pattern:" << std::endl;
    drawPattern(size, false);
    
    return 0;
}