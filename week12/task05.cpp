#include <iostream>
using namespace std;


int findMaxRowSum(int** arr, int n, int m) {
    int maxSum = 0;
    for(int j = 0; j < m; j++) {
        maxSum += arr[0][j];
    }

    for(int i = 0; i < n; i++) {
        int rowSum = 0;
        for(int j = 0; j < m; j++) {
            rowSum += arr[i][j];
        }
        if(rowSum > maxSum) {
            maxSum = rowSum;
        }
    }
    return maxSum;
}

int main() {
    int n, m;
    cout << "Enter dimensions (n m): ";
    cin >> n >> m;
    
    int** arr = new int*[n];
    for(int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }
    
    cout << "Enter elements:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout << "Maximum row sum: " << findMaxRowSum(arr, n, m) << endl;
    
    // Notice how we have to iterate over the array to free the nested ones
    for(int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    
    return 0;
}