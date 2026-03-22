#include <iostream>
#include <algorithm> // For max()
using namespace std;

class LCMCalculator {
public:
    int findLCM(int n1, int n2) {
        // Handle cases with 0 as LCM is not defined for 0 in the same way
        if (n1 == 0 || n2 == 0) return 0;

        int lcm;
        
        // Find the maximum of n1 & n2 to start checking from there
        int n = max(n1, n2);
        int i = 1;
        
        // Infinite loop that breaks once the first common multiple is found
        while(true) {
            // Calculate the next multiple of the larger number
            int mul = n * i;
            
            /* Check if 'mul' is divisible by both numbers.
               Since 'mul' is already a multiple of 'n', 
               we just verify it's also divisible by the other number.
            */
            if(mul % n1 == 0 && mul % n2 == 0) {
                lcm = mul;
                break;
            }
            i++;
        }
        
        return lcm;
    }
};

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    LCMCalculator calc;
    int result = calc.findLCM(num1, num2);

    cout << "The LCM of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}