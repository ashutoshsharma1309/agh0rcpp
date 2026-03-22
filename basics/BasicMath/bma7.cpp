#include <iostream>
#include <cmath> // For pow() function
using namespace std;

class ArmstrongChecker {
public:
    bool isArmstrong(int n) {
        if (n < 0) return false;

        int original = n;
        int temp = n;
        int count = 0;

        // Step 1: Count the number of digits
        int digitCountTemp = n;
        if (digitCountTemp == 0) count = 1;
        while (digitCountTemp > 0) {
            digitCountTemp /= 10;
            count++;
        }

        // Step 2: Calculate the sum of digits raised to the power of 'count'
        long long sum = 0;
        while (temp > 0) {
            int lastDigit = temp % 10;
            sum += pow(lastDigit, count);
            temp /= 10;
        }

        // Step 3: Compare sum with original number
        return (sum == original);
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    ArmstrongChecker ac;
    if (ac.isArmstrong(num)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}