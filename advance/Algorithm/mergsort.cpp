/*
4. Merge Sort Syntax ( TC (Best case, Worst case) = O(n log n) due to the divide and conquer approach, SC = O(n) due to the temporary arrays used for merging)
Logic: A recursive "Divide and Conquer" approach that splits the array and then merges sorted halves using a temporary buffer.
// Helper function to combine two sorted halves
void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp; 
    int left = low, right = mid + 1;

    // Step 1: Pick the smaller of the two pointers and add to temp
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) temp.push_back(arr[left++]);
        else temp.push_back(arr[right++]);
    }
    
    // Step 2: Copy any remaining elements
    while (left <= mid) temp.push_back(arr[left++]);
    while (right <= high) temp.push_back(arr[right++]);

    // Step 3: Transfer sorted elements back to original array
    for (int i = low; i <= high; i++) arr[i] = temp[i - low];
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return; // Base case: single element
    int mid = low + (high - low) / 2;
    
    mergeSort(arr, low, mid);       // Recursively sort left
    mergeSort(arr, mid + 1, high);  // Recursively sort right
    merge(arr, low, mid, high);     // Merge the results
}

*/ 



#include <iostream>
#include <vector>

using namespace std;

class MergeSort {
public:
    // Merges two subarrays of nums[].
    // First subarray is nums[left..mid]
    // Second subarray is nums[mid+1..right]
    void merge(vector<int>& nums, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        // Create temporary arrays
        vector<int> L(n1), R(n2);

        // Copy data to temp arrays
        for (int i = 0; i < n1; i++)
            L[i] = nums[left + i];
        for (int j = 0; j < n2; j++)
            R[j] = nums[mid + 1 + j];

        // Merge the temp arrays back into nums[left..right]
        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                nums[k] = L[i];
                i++;
            } else {
                nums[k] = R[j];
                j++;
            }
            k++;
        }

        // Copy remaining elements of L[], if any
        while (i < n1) {
            nums[k] = L[i];
            i++;
            k++;
        }

        // Copy remaining elements of R[], if any
        while (j < n2) {
            nums[k] = R[j];
            j++;
            k++;
        }
    }

    // Main function that sorts nums[left...right] using merge()
    void sort(vector<int>& nums, int left, int right) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;

        // Recursively sort first and second halves
        sort(nums, left, mid);
        sort(nums, mid + 1, right);

        // Merge the sorted halves
        merge(nums, left, mid, right);
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
    MergeSort ms;
    int n;

    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Original array: ";
    ms.printArray(nums);

    // Call sort from index 0 to n-1
    ms.sort(nums, 0, n - 1);

    cout << "Sorted array:   ";
    ms.printArray(nums);

    return 0;
}