#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        
        // 1. Print Left Numbers (1 to i)
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // 2. Print Spaces (2 * (n - i))
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // 3. Print Right Numbers (i down to 1)
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}