//Unordered Set = The `unordered_set` container stores unique elements in an unsorted manner. It provides faster search operations compared to a set due to hashing.
//1. Insert / Emplace = Inserting elements into an unordered_set can be done using the insert or emplace methods. The insert function adds elements to the container, ensuring that each element is unique, and it relies on hashing for efficient insertion. The emplace method constructs elements in place, which can be more efficient by avoiding unnecessary copies or moves.
//output = Elements printed in any order, e.g., 10 20 30

#include <bits/stdc++.h>
using namespace std;
    
int main() {
    unordered_set<int> us;
    us.insert(10);
    us.insert(20);
    us.emplace(30); // Emplaces an element
    for(int x : us) {
        cout << x << " ";
    }
    return 0;
}   