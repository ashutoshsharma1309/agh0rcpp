#include <iostream>

using namespace std;

class Solution {
public:
    // Function to check if a number is prime
    bool isPrime(int num) {
        // Step 1: Handle base cases
        if (num <= 1) return false;
        if (num <= 3) return true;

        // Step 2: Optimization - eliminate multiples of 2 and 3
        if (num % 2 == 0 || num % 3 == 0) return false;

        // Step 3: Check divisors from 5 up to sqrt(num)
        // We use i * i <= num as a more efficient way to write i <= sqrt(num)
        for (int i = 5; i * i <= num; i += 6) {
            // Check i and i + 2 (skipping multiples of 2 and 3)
            if (num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    int num;

    cout << "Enter an integer: ";
    if (!(cin >> num)) return 0;

    if (sol.isPrime(num)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }

    return 0;
}