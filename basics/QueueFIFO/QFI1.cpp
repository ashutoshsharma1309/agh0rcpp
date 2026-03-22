//Queue (FIFO)=In C++ Standard Template Library (STL), the queue is a versatile container adapter that operates on a First In, First Out (FIFO) basis. It facilitates efficient data handling by allowing elements to be inserted at one end and removed from the other making it particularly useful for managing tasks and scheduling operations in a sequential manner.

//1. Push / Emplace = The push operation adds an element to the end of the queue. The emplace operation constructs the element in place, similar to push, but more efficient.
//Output: Front element: 10

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.emplace(20); // Emplace is similar to push
    
    cout << "Front element: " << q.front() << endl;
    return 0;
}