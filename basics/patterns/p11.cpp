#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        
        // Inner loop for columns
        for (int j = 1; j <= i; j++) {
            
            // If the sum of row and column indices is even, print 1
            if ((i + j) % 2 == 0) {
                cout << "1 ";
            } 
            // Otherwise, print 0
            else {
                cout << "0 ";
            }
        }
        
        // Move to the next line
        cout << endl;
    }

    return 0;
}