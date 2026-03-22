#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

using namespace std;

class SelectionSort {
public:
    // Function to perform Selection Sort
    void sort(vector<int>& nums) {
        int n = nums.size();

        // One by one move the boundary of the unsorted subarray
        for (int i = 0; i < n - 1; i++) {
            
            // Find the minimum element in the unsorted part [i...n-1]
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }

            // Swap the found minimum element with the first element of the unsorted part
            if (minIndex != i) {
                swap(nums[i], nums[minIndex]);
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
    SelectionSort ss;
    int n;

    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Original array: ";
    ss.printArray(nums);

    ss.sort(nums);

    cout << "Sorted array:   ";
    ss.printArray(nums);

    return 0;
}