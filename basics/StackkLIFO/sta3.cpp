//3. Pop = The pop operation removes the top element from the stack.
//output = the top element after pop is 10

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.pop();
    
    cout << "Top element after pop: " << s.top() << endl;
    return 0;
}