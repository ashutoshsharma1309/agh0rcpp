#include <iostream>
using namespace std;

class GCDCalculator {
public:
    int findGCD(int n1, int n2) {
        // Ensure we handle negative numbers by converting to positive
        if (n1 < 0) n1 = -n1;
        if (n2 < 0) n2 = -n2;

        while (n2 != 0) {
            int remainder = n1 % n2;
            n1 = n2;
            n2 = remainder;
        }
        
        return n1;
    }
};

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    GCDCalculator calc;
    int result = calc.findGCD(a, b);

    cout << "The GCD of " << a << " and " << b << " is: " << result << endl;

    return 0;
}