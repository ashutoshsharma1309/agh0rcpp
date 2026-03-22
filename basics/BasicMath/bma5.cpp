#include <iostream>
#include <algorithm> // For max function
using namespace std;

class DigitFinder {
public:
    int largestDigit(int n) {
        if (n == 0) return 0;
        if (n < 0) n = -n; // Handle negative numbers

        int maxDigit = 0;

        while (n > 0) {
            int currentDigit = n % 10;
            
            // Update maxDigit if the current digit is larger
            if (currentDigit > maxDigit) {
                maxDigit = currentDigit;
            }
            
            n /= 10;
        }

        return maxDigit;
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    DigitFinder df;
    cout << "Largest digit: " << df.largestDigit(num) << endl;

    return 0;
}