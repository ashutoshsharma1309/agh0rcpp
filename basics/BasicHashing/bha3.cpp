#include <iostream>
#include <vector>
#include <algorithm>
#include <climits> // For INT_MAX

using namespace std;

class Solution {
public:
    int sumOfMaxMinFreq(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        // Step 1: Sort the array to group identical elements - O(n log n)
        sort(nums.begin(), nums.end());

        int maxFreq = 0;
        int minFreq = INT_MAX;
        
        int i = 0;
        while (i < n) {
            int currentFreq = 0;
            int currentEle = nums[i];

            // Count occurrences of the current element
            while (i < n && nums[i] == currentEle) {
                currentFreq++;
                i++;
            }

            // Step 2: Update the maximum and minimum frequencies found so far
            if (currentFreq > maxFreq) {
                maxFreq = currentFreq;
            }
            if (currentFreq < minFreq) {
                minFreq = currentFreq;
            }
        }

        // If the array only had one type of element, maxFreq and minFreq will be the same
        return maxFreq + minFreq;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter the number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> nums(n);
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) cin >> nums[i];

    int result = sol.sumOfMaxMinFreq(nums);
    
    cout << "-----------------------------------" << endl;
    cout << "Sum of highest and lowest frequency: " << result << endl;

    return 0;
}