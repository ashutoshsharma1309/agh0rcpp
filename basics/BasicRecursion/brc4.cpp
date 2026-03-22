#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    /* Recursive function to reverse the 
    string character by character */
    void reverse(vector<char>& s, int left, int right) {
        
        // Base case
        if (left >= right) return;
        
        // Swap characters at left and right positions
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        
        // Recursive call with updated indices
        reverse(s, left + 1, right - 1);
    }
    
public:
    // Function to reverse the given string
    vector<char> reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        reverse(s, left, right);
        return s;
    }
};

// Main function to test the solution
int main() {
    Solution solution;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    
    // Function call to reverse the given string
    vector<char> reversed = solution.reverseString(s);
    for (char c : reversed) {
        cout << c << " ";
    }
    return 0;
}