#include <bits/stdc++.h>
using namespace std;

class Factorial {
public:

    // Function to calculate factorial
    long long calculate(int n) {
        long long result = 1;
        for (int i = 1; i <= n; i++) {
            result = result * i;
        }
        return result;
    }

    // Function to print the steps
    void showSteps(int n) {
        cout << "Factorial of " << n << " = ";
        for (int i = 1; i <= n; i++) {
            if (i < n)
                cout << i << " * ";
            else
                cout << i;
        }
        cout << " = " << calculate(n) << "\\n";
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter n: ";
    cin >> n;

    Factorial f;                  // create object of class
    f.showSteps(n);               // show the steps
    
    return 0;
}