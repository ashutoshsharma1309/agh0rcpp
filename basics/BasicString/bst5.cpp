#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // If lengths are different, they cannot be isomorphic
        if (s.length() != t.length()) return false;

        // Use arrays as hash maps for ASCII characters (size 256)
        // Initialize with 0 or a value that represents "no mapping"
        int s_to_t[256] = {0};
        int t_to_s[256] = {0};

        for (int i = 0; i < s.length(); i++) {
            char char_s = s[i];
            char char_t = t[i];

            // Check mapping from s to t
            if (s_to_t[char_s] == 0) {
                s_to_t[char_s] = char_t;
            } else if (s_to_t[char_s] != char_t) {
                return false; // Conflicting mapping
            }

            // Check mapping from t to s
            if (t_to_s[char_t] == 0) {
                t_to_s[char_t] = char_s;
            } else if (t_to_s[char_t] != char_s) {
                return false; // Another char in s already mapped to this char in t
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s, t;

    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;

    if (sol.isIsomorphic(s, t)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }

    return 0;
}