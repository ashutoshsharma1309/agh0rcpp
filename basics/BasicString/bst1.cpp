#include <iostream>
#include <vector>
#include <algorithm> // For swap()

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            // Swap characters in place
            swap(s[left], s[right]);

            // Move pointers inward
            left++;
            right--;
        }
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter the length of the string: ";
    cin >> n;

    vector<char> s(n);
    cout << "Enter " << n << " characters (separated by spaces): " << endl;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    // Perform reversal
    sol.reverseString(s);

    // Print result
    cout << "Reversed string array: [";
    for (int i = 0; i < s.size(); i++) {
        cout << "'" << s[i] << "'" << (i == s.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;

    return 0;
}