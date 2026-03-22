#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // Step 1: Different lengths mean they can't be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        // Step 2: Create a frequency array for 26 lowercase letters
        int count[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            // Increment for string s, Decrement for string t
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        // Step 3: Check if all counts are zero
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s, t;

    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    if (sol.isAnagram(s, t)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }

    return 0;
}