#include <iostream>
#include <vector>
#include <algorithm> // For sort()

using namespace std;

class Solution {
public:
    /**
     * Function to find the most frequent element in an array.
     * If multiple elements have the same frequency, the smallest is returned.
     */
    int mostFrequentElement(vector<int> &nums) {
        int n = nums.size();
        if (n == 0) return 0;

        // Step 1: Sort the array - O(n log n)
        // This brings all identical elements together (e.g., 4, 5, 4 becomes 4, 4, 5)
        sort(nums.begin(), nums.end());

        int maxFreq = 0;
        int maxEle = nums[0];
        int currentFreq = 0;

        // Step 2: Single pass to count frequencies - O(n)
        for (int i = 0; i < n; i++) {
            // Check if current element is same as previous
            if (i == 0 || nums[i] == nums[i - 1]) {
                currentFreq++;
            } else {
                // New element encountered, reset frequency to 1
                currentFreq = 1;
            }

            /* Update maxEle if we find a STRICTLY higher frequency. 
               Since the array is sorted, if a later (larger) number 
               has the same frequency, this "if" will skip it, 
               keeping the smaller number as the answer.
            */
            if (currentFreq > maxFreq) {
                maxFreq = currentFreq;
                maxEle = nums[i];
            }
        }
        
        return maxEle;
    }
};

int main() {
    Solution sol;
    int n;

    // 1. Ask for the size of the array
    cout << "Enter the number of elements in the array: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    vector<int> nums(n);

    // 2. Ask for the elements one by one
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // 3. Call the function and display the result
    int result = sol.mostFrequentElement(nums);
    
    cout << "-----------------------------------" << endl;
    cout << "The most frequent (smallest) element is: " << result << endl;

    return 0;
}