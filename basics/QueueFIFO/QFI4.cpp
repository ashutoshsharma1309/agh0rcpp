//4. Size = The size operation returns the number of elements in the queue.
//Output::Size of queue: 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    
    cout << "Size of queue: " << q.size() << endl;
    return 0;
}