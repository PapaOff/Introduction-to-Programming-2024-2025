#include <iostream>
using namespace std;

int main() {
    int sumFor = 0;
    int sumWhile = 0;
    int sumDoWhile = 0;

    // Using for loop
    for (int i = 1; i <= 10; i++) {
        sumFor += i;
    }
    cout << "Sum using for loop: " << sumFor << endl;

    // Using while loop
    int i = 1;
    while (i <= 10) {
        sumWhile += i;
        i++;
    }
    cout << "Sum using while loop: " << sumWhile << endl;

    // Using do...while loop
    i = 1;
    do {
        sumDoWhile += i;
        i++;
    } while (i <= 10);
    cout << "Sum using do...while loop: " << sumDoWhile << endl;

    return 0;
}
