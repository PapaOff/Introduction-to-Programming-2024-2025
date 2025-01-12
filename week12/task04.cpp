#include <iostream>
using namespace std;

int* findElement(int* arr, int size, int element) {
    for(int i = 0; i < size; i++) {
        if(*(arr + i) == element) {
            return (arr + i);
        }
    }
    return nullptr;
}

int main() {
    int size = 5;
    int* arr = new int[size] {1, 2, 3, 4, 5};
    
    int searchElement = 3;
    int* result = findElement(arr, size, searchElement);
    
    if(result != nullptr) {
        cout << "Element found at position: " << (result - arr) << endl; // Since we return a pointer we can do something like this
        cout << "Element value: " << *result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    delete[] arr;
    return 0;
}