/*
2. Bubble Sort Syntax ( TC (Best case) = O(n) when the array is already sorted, TC (Worst case) = O(n^2) when the array is sorted in reverse order, SC = O(1)
Logic: Compare adjacent elements and "bubble" the largest element to the end of the array in each pass.
void bubbleSort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // Optimization: check if any swap occurred
        
        // Step 1: Compare adjacent pairs up to the unsorted boundary
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                swapped = true; // Mark that a swap happened
            }
        }
        
        // Step 2: If no swaps occurred, the array is already sorted
        if (!swapped) break; 
    }
}
*/

#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

using namespace std;

class BubbleSort {
public:
    // Function to perform Bubble Sort
    void sort(vector<int>& nums) {
        int n = nums.size();
        bool swapped;

        // Loop through the entire array
        for (int i = 0; i < n - 1; i++) {
            swapped = false;

            // Last i elements are already in place, so we ignore them
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    // Swap if the element is greater than the next element
                    swap(nums[j], nums[j + 1]);
                    swapped = true;
                }
            }

            // Optimization: If no two elements were swapped by inner loop, then break
            if (!swapped) {
                break;
            }
        }
    }

    // Utility function to print the array
    void printArray(const vector<int>& nums) {
        cout << "[ ";
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << (i == nums.size() - 1 ? "" : ", ");
        }
        cout << " ]" << endl;
    }
};

int main() {
    BubbleSort bs;
    int n;

    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Original array: ";
    bs.printArray(nums);

    bs.sort(nums);

    cout << "Sorted array:   ";
    bs.printArray(nums);

    return 0;
}