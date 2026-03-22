//Stack(LIFO) = In C++ Standard Template Library (STL), the stack is a powerful container adapter that follows the Last In, First Out (LIFO) principle. It provides a streamlined interface for adding and removing elements from one end, making it ideal for scenarios requiring dynamic data management and nested operations.

//1. Push / Emplace= The push operation adds an element to the top of the stack.
//output = Top element is 20

#include <bits/stdc++.h>
using namespace std;
    
int main() {
    stack<int> s;
    s.push(10);
    s.emplace(20); // Emplace is similar to push
        
    cout << "Top element: " << s.top() << endl;
    return 0;
}