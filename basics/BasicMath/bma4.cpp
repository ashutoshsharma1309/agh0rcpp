#include <iostream>
using namespace std;

class PalindromeChecker {
public:
    bool isPalindrome(int n) {
        // Negative numbers are not palindromes (e.g., -121 reversed is 121-)
        if (n < 0) return false;

        int original = n;
        long long reversed = 0; // Using long long to prevent overflow

        while (n > 0) {
            int lastDigit = n % 10;
            reversed = (reversed * 10) + lastDigit;
            n /= 10;
        }

        return (original == reversed);
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    PalindromeChecker pc;
    if (pc.isPalindrome(num)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}