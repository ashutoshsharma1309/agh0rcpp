#include <iostream>
#include <algorithm> // For swap()
using namespace std;

class ArrayReverser {
public:
    void reverseArray(int arr[], int n) {
        int left = 0;
        int right = n - 1;

        while (left < right) {
            // Swap elements at left and right pointers
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            // Move pointers towards the center
            left++;
            right--;
        }
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

    ArrayReverser ar;
    ar.reverseArray(arr, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}