#include <iostream>

using namespace std;

class Solution {
public:
    // Recursive function to find the nth Fibonacci number
    int fib(int n) {
        // Base Cases
        if (n == 0) return 0;
        if (n == 1) return 1;

        // Recursive Relation
        return fib(n - 1) + fib(n - 2);
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter the value of n: ";
    if (!(cin >> n) || n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 0;
    }

    cout << "F(" << n << ") = " << sol.fib(n) << endl;

    return 0;
}