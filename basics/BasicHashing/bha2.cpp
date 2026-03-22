#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int secondMostFrequent(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return -1;

        // Step 1: Sort the array - O(n log n)
        sort(nums.begin(), nums.end());

        int maxFreq = 0, maxEle = -1;
        int secondMaxFreq = 0, secondMaxEle = -1;

        int i = 0;
        while (i < n) {
            int currentEle = nums[i];
            int currentFreq = 0;

            // Count occurrences of the current element
            while (i < n && nums[i] == currentEle) {
                currentFreq++;
                i++;
            }

            // Step 2: Update first and second max frequencies
            if (currentFreq > maxFreq) {
                // Old max becomes second max
                secondMaxFreq = maxFreq;
                secondMaxEle = maxEle;
                
                // New max is set
                maxFreq = currentFreq;
                maxEle = currentEle;
            } 
            else if (currentFreq < maxFreq && currentFreq > secondMaxFreq) {
                // New second max is set
                secondMaxFreq = currentFreq;
                secondMaxEle = currentEle;
            }
            // Note: If currentFreq == secondMaxFreq, we do nothing because 
            // the array is sorted, so we already have the smallest element 
            // for that frequency stored in secondMaxEle.
        }

        return (secondMaxFreq == 0) ? -1 : secondMaxEle;
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

    int result = sol.secondMostFrequent(nums);
    
    if (result == -1) 
        cout << "Second most frequent element does not exist." << endl;
    else 
        cout << "The second most frequent (smallest) element is: " << result << endl;

    return 0;
}