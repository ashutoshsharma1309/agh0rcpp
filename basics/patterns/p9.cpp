#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // --- PART 1: ERECT PYRAMID ---
    for (int i = 0; i < n; i++) {
        // Left spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        // Right spaces (optional but included per your logic)
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }

    // --- PART 2: INVERTED PYRAMID ---
    for (int i = 0; i < n; i++) {
        // Left spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }
        // Right spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}