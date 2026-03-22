//3. Pop = The pop operation removes the front element from the queue.
//Output: Front element after pop: 20

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.pop();
    
    cout << "Front element after pop: " << q.front() << endl;
    return 0;
}