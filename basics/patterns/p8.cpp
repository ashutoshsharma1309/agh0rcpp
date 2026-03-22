#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Outer loop: Handles each row (0 to n-1)
    for (int i = 0; i < n; i++) {
        
        // 1. Left Spaces: Increases as we go down (0, 1, 2, 3...)
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        
        // 2. Stars: Decreases as we go down (2*n-1, 2*n-3, 2*n-5...)
        // For N=5: (10-1)=9, (10-3)=7, (10-5)=5, etc.
        for (int j = 0; j < (2 * n - (2 * i + 1)); j++) {
            cout << "*";
        }
        
        // 3. Right Spaces: Mirror of the left side
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        
        // Move to the next line
        cout << endl;
    }

    return 0;
}