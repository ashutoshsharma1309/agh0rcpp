//Map = The `map` container stores key-value pairs in a sorted order based on the keys. It provides efficient lookup and insertion operations.
//1. Insert / Emplace / Assignment = Key-value pairs can be added to a map using insert, emplace, or assignment. The insert function adds a new pair without modifying existing entries if the key is present. The emplace method constructs the pair in place avoiding unnecessary copies or moves. Assignment updates the value for an existing key or adds a new key-value pair if the key is absent. All methods maintain the map’s sorted order and ensure efficient operations.
/*Output:
1: one
2: two
3: three*/

#include <bits/stdc++.h>
using namespace std;
    
int main() {
    map<int, string> m;
    m.insert({1, "one"});
    m.emplace(2, "two");  // Emplaces a key-value pair
    m[3] = "three";       // Assignment
    for(auto &p : m) {
        cout << p.first << ": " << p.second << "\n";
    }
    return 0;
}