#include <iostream>
using namespace std;

class ArrayCounter {
public:
    int countOdds(int arr[], int n) {
        int count = 0;

        for (int i = 0; i < n; i++) {
            // Check if the current element is odd
            if (arr[i] % 2 != 0) {
                count++;
            }
        }

        return count;
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

    ArrayCounter ac;
    cout << "Number of odd elements: " << ac.countOdds(arr, n) << endl;

    return 0;
}