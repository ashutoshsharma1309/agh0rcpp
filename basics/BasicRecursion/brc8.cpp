#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Function to check if the array is sorted in non-decreasing order
    bool isSorted(vector<int>& nums) {
        int n = nums.size();
        
        // An empty array or an array with one element is technically sorted
        if (n <= 1) return true;

        for (int i = 0; i < n - 1; i++) {
            // If any element is greater than the next, it's not sorted
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter the number of elements: ";
    if (!(cin >> n)) return 0;

    vector<int> nums(n);
    if (n > 0) {
        cout << "Enter " << n << " integers: ";
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
    }

    if (sol.isSorted(nums)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }

    return 0;
}