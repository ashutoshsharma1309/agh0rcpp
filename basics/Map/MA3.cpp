//3.Empty = The empty function checks whether the map is empty by returning a boolean value. It returns true if the map contains no elements and false otherwise, providing a simple way to determine if any elements are present.
//Output: Empty

#include <bits/stdc++.h>
using namespace std;
    
int main() {
    map<int, string> m;
    cout << (m.empty() ? "Empty" : "Not Empty");
    return 0;
}