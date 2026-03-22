#include <iostream>
using namespace std;

int countDigits(int n) {
    // Handle the special case where n is 0
    if (n == 0) return 1;

    // Use a temporary variable to avoid modifying the original n if needed
    // If n is negative, make it positive
    if (n < 0) n = -n;

    int count = 0;
    while (n > 0) {
        n = n / 10; // This removes the last digit
        count++;    // Increment the digit counter
    }

    return count;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << "Number of digits: " << countDigits(n) << endl;

    return 0;
}