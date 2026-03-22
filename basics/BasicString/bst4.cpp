#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Take the first string as the reference
        string base = strs[0];

        for (int i = 0; i < base.length(); i++) {
            char c = base[i];

            // Compare this character with the same position in all other strings
            for (int j = 1; j < strs.size(); j++) {
                // If i reaches the end of current string OR characters don't match
                if (i == strs[j].length() || strs[j][i] != c) {
                    // Return everything we've matched so far
                    return base.substr(0, i);
                }
            }
        }

        return base;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter " << n << " strings:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string result = sol.longestCommonPrefix(strs);
    
    if (result == "") {
        cout << "Longest Common Prefix: (empty string)" << endl;
    } else {
        cout << "Longest Common Prefix: " << result << endl;
    }

    return 0;
}