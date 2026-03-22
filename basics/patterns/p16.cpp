#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char ch = 'A'; // Start with 'A'

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        
        // Inner loop: print the SAME character 'i' times
        for (int j = 1; j <= i; j++) {
            cout << ch;
        }
        
        // Increment character for the NEXT row
        ch++;
        
        // Move to next line
        cout << endl;
    }

    return 0;
}