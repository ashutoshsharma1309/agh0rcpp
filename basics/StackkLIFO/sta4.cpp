//4. Size = The size operation returns the number of elements in the stack.
//output = the size of the stack is 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    
    cout << "Size of stack: " << s.size() << endl;
    return 0;
}