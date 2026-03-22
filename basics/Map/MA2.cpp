//Find = The find function searches for a key in the map and returns an iterator to the key-value pair if the key is found. If the key is not present, it returns an iterator to the end() of the map, allowing efficient lookup with average logarithmic time complexity.
//Output: Found: two

#include <bits/stdc++.h>
using namespace std;
    
int main() {
    map<int, string> m = {{1, "one"}, {2, "two"}, {3, "three"}};
    auto it = m.find(2);
    if(it != m.end()) cout << "Found: " << it->second;
    else cout << "Not Found";
    return 0;
}   