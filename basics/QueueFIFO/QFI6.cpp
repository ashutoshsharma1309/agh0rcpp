//6. Empty= The empty operation checks if the queue is empty. It returns true if the queue is empty, otherwise false.
//Output: Is queue empty? Yes Is queue empty after push? No

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;
    
    q.push(10);
    
    cout << "Is queue empty after push? " << (q.empty() ? "Yes" : "No") << endl;
    return 0;
}