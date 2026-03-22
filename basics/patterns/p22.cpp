#include <iostream>
#include <algorithm> // For min function
using namespace std;

int main() {
    int n;
    cin >> n;

    int size = 2 * n - 1; // Total number of rows and columns

    // Outer loop for rows
    for (int i = 0; i < size; i++) {
        
        // Inner loop for columns
        for (int j = 0; j < size; j++) {
            
            // Calculate distance to each of the 4 edges
            int top = i;
            int left = j;
            int bottom = (size - 1) - i;
            int right = (size - 1) - j;
            
            // The value is N minus the minimum distance to any edge
            int minDist = min({top, left, bottom, right});
            cout << n - minDist << " ";
        }
        
        // Move to the next line
        cout << endl;
    }

    return 0;
}