//6. Empty = The empty operation checks if the stack is empty. It returns true if the stack is empty, otherwise false.
//output = Is stack empty? Yes Is stack empty after push? No

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;
    
    s.push(10);
    
    cout << "Is stack empty after push? " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}