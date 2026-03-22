#include <iostream>
using namespace std;

class PrimeChecker {
public:
    bool isPrime(int n) {
       // Edge case
        if(n < 2) return false;
        
        // Loop from 2 to n-1
        for (int i = 2; i < n; ++i) {
            
            // Check if i is a divisor
            if (n % i == 0) {
                return false;
            }
        }
        
        // Return true as the number is prime
        return true;
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    PrimeChecker pc;
    if (pc.isPrime(num)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}