#include <iostream>
using namespace std;

void removeSmaller(int* arr, int& size) {
    bool changed;
    do {
        changed = false;
        for(int i = 1; i < size - 1; i++) {
            if(*(arr + i) < *(arr + i - 1) && *(arr + i) < *(arr + i + 1)) {
                int temp = *(arr + i);
                for(int j = i; j < size - 1; j++) {
                    *(arr + j) = *(arr + j + 1);
                }
                *(arr + size - 1) = temp;
                size--;
                i--;
                changed = true;
            }
        }
    } while(changed);
}

int main() {
    int size = 5;
    int* arr = new int[size] {3, 1, 2, 4, 5};
    
    cout << "Original: ";
    for(int i = 0; i < size; i++) cout << *(arr + i) << " ";
    
    removeSmaller(arr, size);
    
    cout << "\nAfter removal: ";
    for(int i = 0; i < 5; i++) cout << *(arr + i) << " ";
    
    delete[] arr;
    return 0;
}