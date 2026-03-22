//Lists are sequence containers that support non-contiguous memory allocation. Unlike vectors, which offer faster traversal, lists have slower traversal times.

//1. push_front / emplace_front (List) =The push_front function inserts a new element at the beginning of the list, while emplace_front constructs an element in place at the beginning. 
//output = 10,20

#include <bits/stdc++.h>
using namespace std;
        
int main() {
    list<int> lst;
    lst.push_front(20);
    lst.emplace_front(10);  // Constructs 10 at the beginning
    for (int i :     lst) {
        cout << i << " ";
    }
return 0;
}