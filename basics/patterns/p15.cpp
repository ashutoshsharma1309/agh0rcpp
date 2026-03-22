#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Outer loop: Starts from N and decreases to 1
    for (int i = n; i >= 1; i--) {
        
        char ch = 'A';
        
        // Inner loop: Prints 'i' characters starting from 'A'
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        
        // Move to the next line
        cout << endl;
    }

    return 0;
}