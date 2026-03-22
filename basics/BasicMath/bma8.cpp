#include <iostream>
using namespace std;

class PerfectNumber {
public:
    bool isPerfect(int n) {
        // Perfect numbers are positive integers > 1
        if (n <= 1) return false;

        int sum = 0;

        // Loop to find all proper divisors
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

        return (sum == n);
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    PerfectNumber pn;
    if (pn.isPerfect(num)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}