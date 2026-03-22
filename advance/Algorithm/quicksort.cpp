/*
5. Quick Sort Syntax (TC (Best case, Average case) = O(n log n) when the pivot divides the array into two equal halves, TC (Worst case) = O(n^2) when the smallest or largest element is always chosen as pivot, SC = O(log n) on average due to recursive stack space)
Logic: Partition the array around a "pivot" element so that smaller elements are on the left and larger ones are on the right.
// Helper function to partition the array
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = low - 1;       // Tracks the boundary of smaller elements

    for (int j = low; j < high; j++) {
        // Step 1: If current element < pivot, move it to the 'small' side
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // Step 2: Place pivot in its final sorted position
    swap(arr[i + 1], arr[high]);
    return i + 1; // Return the pivot's index
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Pivot index
        quickSort(arr, low, pi - 1);        // Sort left of pivot
        quickSort(arr, pi + 1, high);       // Sort right of pivot
    }
}
*/ 


#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

using namespace std;

class QuickSort {
public:
    /* This function takes the last element as pivot, places
       the pivot element at its correct position in sorted
       array, and places all smaller to left of pivot and
       all greater elements to right of pivot */
    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[high]; // Choosing the last element as pivot
        int i = (low - 1);      // Index of smaller element

        for (int j = low; j < high; j++) {
            // If current element is smaller than or equal to pivot
            if (nums[j] <= pivot) {
                i++; 
                swap(nums[i], nums[j]);
            }
        }
        // Place the pivot in its correct sorted position
        swap(nums[i + 1], nums[high]);
        return (i + 1);
    }

    // The main function that implements QuickSort
    void sort(vector<int>& nums, int low, int high) {
        if (low < high) {
            // pi is partitioning index, nums[p] is now at right place
            int pi = partition(nums, low, high);

            // Separately sort elements before partition and after partition
            sort(nums, low, pi - 1);
            sort(nums, pi + 1, high);
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
    QuickSort qs;
    int n;

    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Original array: ";
    qs.printArray(nums);

    // Call sort from index 0 to n-1
    qs.sort(nums, 0, n - 1);

    cout << "Sorted array:   ";
    qs.printArray(nums);

    return 0;
}