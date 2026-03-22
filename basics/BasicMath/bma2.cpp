#include <iostream>
using namespace std;

class Solution {
public:
    int countOddDigit(int n) {
        if (n < 0) n = -n;

    int oddCount = 0;

    // If n is 0, the loop won't run (0 is even anyway)
    while (n > 0) {
        int lastDigit = n % 10; // Extract the last digit
        
        // Check if the digit is odd
        if (lastDigit % 2 != 0) {
            oddCount++;
        }
        
        n = n / 10; // Remove the last digit
    }
        return oddCount;
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Create an object (instance) of the DigitAnalyzer class
    countOddDigit COD;

    // Call the function using the object
    int result = COD.countOddDigits(n);

    cout << "Number of odd digits: " << result << endl;

    return 0;
}