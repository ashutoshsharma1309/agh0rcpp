#include <iostream>
using namespace std;

class ArrayChecker {
public:
    bool isSorted(int arr[], int n) {
        // An array with 0 or 1 element is always considered sorted
        if (n <= 1) return true;

        // Loop up to n-2 because we compare with i+1
        for (int i = 0; i < n - 1; i++) {
            // If current element is greater than the next, it's not sorted
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }

        return true;
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

    ArrayChecker ac;
    if (ac.isSorted(arr, n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}