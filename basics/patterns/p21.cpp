#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Outer loop for rows
    for (int i = 0; i < n; i++) {
        
        // Inner loop for columns
        for (int j = 0; j < n; j++) {
            
            // Boundary condition check
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "*";
            } 
            else {
                cout << " ";
            }
        }
        
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}