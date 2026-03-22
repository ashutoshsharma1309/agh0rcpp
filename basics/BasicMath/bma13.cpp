#include <iostream>
#include <vector>
#include <algorithm> // For sort()
using namespace std;

class DivisorFinder {
public:
    vector<int> getAllDivisors(int n) {
        vector<int> divisors;
        
        // Loop from 1 to the square root of n
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i); // Add the first divisor
                
                // Add the paired divisor (n/i) if it's different
                if (i * i != n) {
                    divisors.push_back(n / i);
                }
            }
        }
        
        // Sort the divisors in ascending order
        sort(divisors.begin(), divisors.end());
        
        return divisors;
    }
};

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    DivisorFinder df;
    vector<int> result = df.getAllDivisors(n);

    cout << "Divisors: [";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << (i == result.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;

    return 0;
}



/////////////////////////////////////////////////////


#include <iostream>
using namespace std;

class DivisorFinder {
public:
    void printDivisors(int n) {
        if (n <= 0) return;

        cout << "Divisors of " << n << " are: ";

        // First pass: Find and print divisors from 1 to sqrt(n)
        int i;
        for (i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                cout << i << " ";
            }
        }

        // Backtrack to print the pairs in descending order
        // We start from the value where the last loop left off
        for (i = i - 1; i >= 1; i--) {
            if (n % i == 0) {
                // If i*i == n, we already printed this divisor in the first loop
                if (i * i != n) {
                    cout << n / i << " ";
                }
            }
        }
        cout << endl;
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    DivisorFinder df;
    df.printDivisors(num);

    return 0;
}