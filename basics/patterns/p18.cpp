#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        
        // Determine the starting character for this specific row
        // For N=5: Row 1 starts at 'E' (A + 5 - 1), Row 2 at 'D' (A + 5 - 2)...
        char startChar = 'A' + (n - i);
        
        // Inner loop: print 'i' characters starting from startChar
        for (int j = 1; j <= i; j++) {
            cout << startChar << " ";
            startChar++; // Increment character within the row
        }
        
        // Move to the next line
        cout << endl;
    }

    return 0;
}