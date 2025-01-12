#include <iostream>
using namespace std;

// Notice the usage of pointer arithmetics
bool arrayContains(int* arr, int size, int element) {
    for(int i = 0; i < size; i++) {
        if(*(arr + i) == element) {
            return true;
        }
    }
    return false;
}

bool compareArrays(int* arr1, int size1, int* arr2, int size2) {
    for(int i = 0; i < size1; i++) {
        if(!arrayContains(arr2, size2, *(arr1 + i))) {
            return false;
        }
    }
    return true;
}

int main() {
    int size1 = 5;
    int* arr1 = new int[size1] {11, 72, 13, 14, 15};
    
    int size2;
    cout << "Enter size for second array: ";
    cin >> size2;
    
    int* arr2 = new int[size2];
    
    cout << "Enter " << size2 << " numbers for second array:" << endl;
    for(int i = 0; i < size2; i++) {
        cin >> *(arr2 + i);
    }
    
    if(compareArrays(arr1, size1, arr2, size2)) {
        cout << "Numbers from first array are present in second array" << endl;
    } else {
        cout << "Not all numbers from first array are present in second array" << endl;
    }
    
    delete[] arr1;
    delete[] arr2;
    
    return 0;
}