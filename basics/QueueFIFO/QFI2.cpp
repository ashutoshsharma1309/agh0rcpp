//2. Front = The front operation returns the element at the front of the queue without removing it.
//Output:Front element: 10

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    
    cout << "Front element: " << q.front() << endl;
    return 0;
}