//5. Swap = The swap operation swaps the contents of two stacks.
//output = Top element of s1 after swap: 20 Top element of s2 after swap: 10

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s1, s2;
    s1.push(10);
    s2.push(20);
    s1.swap(s2);
    
    cout << "Top element of s1 after swap: " << s1.top() << endl;
    cout << "Top element of s2 after swap: " << s2.top() << endl;
    return 0;
}