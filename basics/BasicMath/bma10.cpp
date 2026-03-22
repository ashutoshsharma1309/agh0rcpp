#include <iostream>
using namespace std;

class PrimeCounter {
public:
    int countPrimes(int n) {
        int totalCount = 0;

        // Outer loop: Check every number from 2 to n
        for (int i = 2; i <= n; i++) {
            bool isPrime = true;

            // Inner loop: Check if 'i' has any divisors
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break; // Exit inner loop early if a divisor is found
                }
            }

            // If no divisors were found, it's a prime
            if (isPrime) {
                totalCount++;
            }
        }

        return totalCount;
    }
};

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    PrimeCounter pc;
    int result = pc.countPrimes(n);

    cout << "Number of primes in range [1, " << n << "]: " << result << endl;

    return 0;
}