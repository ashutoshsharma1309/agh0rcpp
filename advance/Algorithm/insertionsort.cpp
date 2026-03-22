/*
3. Insertion Sort Syntax ( TC (Best case) = O(n) when the array is already sorted, TC (Worst case) = O(n^2) when the array is sorted in reverse order, SC = O(1)
Logic: Take one element (key) and shift all larger elements to the right to find the key's correct sorted position.
void insertionSort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        int key = nums[i]; // The element we are currently positioning
        int j = i - 1;

        // Step 1: Shift elements of sorted part [0..i-1] that are > key
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j]; // Move element one position ahead
            j--;
        }
        
        // Step 2: Insert the key into its correct "hole"
        nums[j + 1] = key;
    }
}

*/ 



#include <iostream>
#include <vector>

using namespace std;

class InsertionSort {
public:
    // Function to perform Insertion Sort
    void sort(vector<int>& nums) {
        int n = nums.size();

        // Start from the second element (index 1)
        for (int i = 1; i < n; i++) {
            int key = nums[i]; // The element to be inserted
            int j = i - 1;

            /* Move elements of nums[0..i-1], that are
               greater than key, to one position ahead
               of their current position */
            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j = j - 1;
            }
            
            // Place the key at its correct position
            nums[j + 1] = key;
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
    InsertionSort is;
    int n;

    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Original array: ";
    is.printArray(nums);

    is.sort(nums);

    cout << "Sorted array:   ";
    is.printArray(nums);

    return 0;
}