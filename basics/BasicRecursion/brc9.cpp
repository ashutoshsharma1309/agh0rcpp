#include <iostream>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        
        while (num > 0) {
            sum += num % 10; // Get last digit
            num /= 10;       // Remove last digit
            
            // If we finished the digits of the current number 
            // but the sum is still multiple digits, reset
            if (num == 0 && sum > 9) {
                num = sum;
                sum = 0;
            }
        }
        return sum;
    }
};

int main() {
    Solution sol;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Output: " << sol.addDigits(num) << endl;

    return 0;
}