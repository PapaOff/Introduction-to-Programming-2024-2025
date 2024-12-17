#include <iostream>
using namespace std;

int main() {
    int numRows;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    for (int n = 0; n < numRows; ++n) {
        for (int space = 0; space < numRows - n - 1; space++) {
            cout << " ";
        }

        int value = 1;
        for (int k = 0; k <= n; ++k) {
            cout << value << " ";
            value = value * (n - k) / (k + 1);
        }
        cout << endl;
    }

    return 0;
}