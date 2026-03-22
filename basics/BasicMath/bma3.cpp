#include <iostream>
using namespace std;

class ReverseInteger {
public:
    int reverse(int n) {
        int revNum = 0;
        
        while (n > 0) {
            int lastDigit = n % 10;
            // Shift current revNum left and add the new digit
            revNum = (revNum * 10) + lastDigit;
            n /= 10;
        }
        
        return revNum;
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    ReverseInteger obj;
    cout << "Reversed Number: " << obj.reverse(num) << endl;

    return 0;
}