#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            // If characters at current pointers don't match, it's not a palindrome
            if (s[left] != s[right]) {
                return false;
            }
            
            // Move pointers towards the middle
            left++;
            right--;
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter a string: ";
    cin >> s;

    if (sol.isPalindrome(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}