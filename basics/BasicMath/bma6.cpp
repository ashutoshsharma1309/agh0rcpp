#include <iostream>
using namespace std;

class FactorialCalculator {
public:
    long long calculate(int n) {
        // Factorial is not defined for negative numbers
        if (n < 0) return -1; 
        
        long long fact = 1;

        // Loop from 1 to n to calculate the product
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }

        return fact;
    }
};

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    FactorialCalculator fc;
    long long result = fc.calculate(num);

    if (result == -1) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << num << "! = " << result << endl;
    }

    return 0;
}