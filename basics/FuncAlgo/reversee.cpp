//8. Pow = The `pow` function, found in the <cmath> library, raises a base number to the power of an exponent. 
//Output: 2^3 = 8

#include <bits/stdc++.h>
using namespace std;

int main() {
    double base = 2.0, exp = 3.0;
    double result = pow(base, exp);
    cout << "2^3 = " << result;
    return 0;
}