#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int rows = 1;  rows <= n; rows++){
        for (int cols = 1; cols <= n; cols++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}; 