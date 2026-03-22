#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        
        // 1. Print Leading Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // 2. Print Increasing Characters
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }

        // 3. Print Decreasing Characters
        // We start one character back from where the previous loop ended
        ch -= 2; 
        for (int j = 1; j < i; j++) {
            cout << ch;
            ch--;
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}