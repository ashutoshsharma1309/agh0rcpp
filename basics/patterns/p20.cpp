#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // --- PART 1: TOP HALF (Rows 1 to N) ---
    for (int i = 1; i <= n; i++) {
        // Left Stars
        for (int j = 1; j <= i; j++) cout << "*";
        
        // Middle Spaces (starts at 2*n - 2)
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        
        // Right Stars
        for (int j = 1; j <= i; j++) cout << "*";
        
        cout << endl;
    }

    // --- PART 2: BOTTOM HALF (Rows 1 to N-1) ---
    for (int i = 1; i <= n - 1; i++) {
        // Left Stars (starts at n-1)
        for (int j = 1; j <= n - i; j++) cout << "*";
        
        // Middle Spaces (starts at 2)
        for (int j = 1; j <= 2 * i; j++) cout << " ";
        
        // Right Stars
        for (int j = 1; j <= n - i; j++) cout << "*";
        
        cout << endl;
    }

    return 0;
}