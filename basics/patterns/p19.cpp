#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // --- PART 1: TOP HALF ---
    for (int i = 0; i < n; i++) {
        // Left Stars (n, n-1, n-2...)
        for (int j = 1; j <= n - i; j++) cout << "*";
        
        // Middle Spaces (0, 2, 4...)
        for (int j = 1; j <= 2 * i; j++) cout << " ";
        
        // Right Stars (n, n-1, n-2...)
        for (int j = 1; j <= n - i; j++) cout << "*";
        
        cout << endl;
    }

    // --- PART 2: BOTTOM HALF ---
    for (int i = 1; i <= n; i++) {
        // Left Stars (1, 2, 3...)
        for (int j = 1; j <= i; j++) cout << "*";
        
        // Middle Spaces (2n-2, 2n-4...)
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        
        // Right Stars (1, 2, 3...)
        for (int j = 1; j <= i; j++) cout << "*";
        
        cout << endl;
    }

    return 0;
}