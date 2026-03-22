#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

using namespace std;

class Solution {
public:
    // Function to reverse the array in-place
    void reverseArray(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            // Swap the elements at the two pointers
            swap(nums[left], nums[right]);

            // Move the pointers towards each other
            left++;
            right--;
        }
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter the number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sol.reverseArray(nums);

    cout << "Reversed array: [ ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << (i == nums.size() - 1 ? "" : ", ");
    }
    cout << " ]" << endl;

    return 0;
}