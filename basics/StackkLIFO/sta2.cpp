//2. Top =The top operation returns the element at the top of the stack without removing it.
//output = top element is 20

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    
    cout << "Top element: " << s.top() << endl;
    return 0;
}