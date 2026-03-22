#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        
        char ch = 'A'; // Reset to 'A' at the start of every row
        
        // Inner loop: row 'i' prints 'i' characters
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++; // Move to the next character (A -> B -> C...)
        }
        
        // Move to the next line
        cout << endl;
    }

    return 0;
}