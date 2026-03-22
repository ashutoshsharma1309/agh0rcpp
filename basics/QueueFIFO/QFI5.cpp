//5. Swap= The swap operation swaps the contents of two queues.
//Output: Front element of q1 after swap: 20 Front element of q2 after swap: 10

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q1, q2;
    q1.push(10);
    q2.push(20);
    q1.swap(q2);
    
    cout << "Front element of q1 after swap: " << q1.front() << endl;
    cout << "Front element of q2 after swap: " << q2.front() << endl;
    return 0;
}
