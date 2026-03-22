//4. Size = The size function retrieves the number of key-value pairs currently stored in the map. It returns the count of elements, allowing you to gauge the map's capacity and manage resources accordingly.
//Output: Size: 3

#include <bits/stdc++.h>
using namespace std;
    
int main() {
    map<int, string> m = {{1, "one"}, {2, "two"}, {3, "three"}};
    cout << "Size: " << m.size();
    return 0;
}