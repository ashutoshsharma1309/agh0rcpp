#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    // Outer loop for each row
    for (int rows = 1; rows <= n; rows++) {
        
        // 1. Print Left Spaces
        for (int cols = 1; cols <= n - rows; cols++) {
            cout << " ";
        }

        // 2. Print Stars
        for (int cols = 1; cols <= (2 * rows - 1); cols++) {
            cout << "*";
        }

        // 3. Print Right Spaces
        for (int cols = 1; cols <= n - rows; cols++) {
            cout << " ";
        }

        // Move to the next line after completing the row
        cout << endl;
    }
    return 0;
}