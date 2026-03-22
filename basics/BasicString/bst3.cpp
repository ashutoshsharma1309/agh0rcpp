#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string largestOddSubstring(string s) {
        int n = s.length();
        int right = -1;

        // Step 1: Find the rightmost odd digit
        for (int i = n - 1; i >= 0; i--) {
            if ((s[i] - '0') % 2 != 0) {
                right = i;
                break;
            }
        }

        // If no odd digit is found, return empty string
        if (right == -1) return "";

        // Step 2: Find the first non-zero digit to handle leading zeros
        int left = 0;
        while (left < right && s[left] == '0') {
            left++;
        }

        // Step 3: Return the substring from left to right
        return s.substr(left, right - left + 1);
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter the string: ";
    cin >> s;

    string result = sol.largestOddSubstring(s);
    
    if (result == "") {
        cout << "Output: (empty string)" << endl;
    } else {
        cout << "Output: " << result << endl;
    }

    return 0;
}