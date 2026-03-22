#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    /* Recursive function to check palindrome.
       All members are public as requested. */
    bool checkPalindrome(string &s, int left, int right) {
        // Base case: If pointers meet or cross, it's a palindrome
        if (left >= right) {
            return true;
        }

        // If characters at current positions don't match, return false
        if (s[left] != s[right]) {
            return false;
        }

        // Recursive call: check the inner substring
        return checkPalindrome(s, left + 1, right - 1);
    }

    bool isPalindrome(string s) {
        if (s.length() == 0) return true;
        return checkPalindrome(s, 0, s.length() - 1);
    }
};

int main() {
    Solution sol;
    string input;

    cout << "Enter a string: ";
    cin >> input;

    if (sol.isPalindrome(input)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }

    return 0;
}