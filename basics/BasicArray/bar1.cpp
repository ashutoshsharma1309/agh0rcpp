#include <iostream>
using namespace std;

class ArrayOperations {
public:
    int findSum(int arr[], int n) {
        int sum = 0; // Initialize sum to 0

        // Loop through the array from index 0 to n-1
        for (int i = 0; i < n; i++) {
            sum += arr[i]; // Add each element to sum
        }

        return sum;
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ArrayOperations op;
    int totalSum = op.findSum(arr, n);

    cout << "Sum of elements: " << totalSum << endl;

    return 0;
}