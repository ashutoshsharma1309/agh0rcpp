#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = 1; // Starting number

    // Outer loop for the number of rows
    for (int i = 1; i <= n; i++) {
        
        // Inner loop: row 'i' prints 'i' numbers
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++; // Increment the counter every time a number is printed
        }
        
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}