#include <iostream>
using namespace std;

char getFirstUniqueChar(char* str) {
    int len = 0;
    while(*(str + len) != '\0') len++;
    
    for(int i = 0; i < len; i++) {
        bool isUnique = true;
        for(int j = 0; j < len; j++) {
            if(i != j && *(str + i) == *(str + j)) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) return *(str + i);
    }
    return '0';
}

int main() {
    char str[] = "pepsii";
    
    cout << "First unique: " << getFirstUniqueChar(str) << endl;
    
    return 0;
}