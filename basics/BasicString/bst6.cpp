#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        // If lengths are different, they can't be rotations of each other
        if (s.length() != goal.length()) {
            return false;
        }

        // Concatenate s with itself
        string combined = s + s;

        // Check if goal is a substring of combined
        // string::find returns string::npos if not found
        if (combined.find(goal) != string::npos) {
            return true;
        }

        return false;
    }
};

int main() {
    Solution sol;
    string s, goal;

    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string goal: ";
    cin >> goal;

    if (sol.rotateString(s, goal)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }

    return 0;
}