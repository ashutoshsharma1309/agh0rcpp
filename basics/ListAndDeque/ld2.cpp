//2. front (List) = The front function returns a reference to the first element in the list.
//output = 10

#include <bits/stdc++.h>
using namespace std;
        
int main() {
    list<int> lst = {10, 20, 30};
    cout << "Front element: " << lst.front();
    return 0;
}