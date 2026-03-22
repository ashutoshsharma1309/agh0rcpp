//Set Container = The `set` container in C++ stores unique elements in a sorted manner. It automatically removes duplicate entries and provides efficient search operations.
//Insert / Emplace
//Elements can be added to a set using two methods: insert and emplace. The insert function adds a new element if it's not already present, returning a pair indicating success and an iterator. The emplace function constructs the element in place, potentially improving efficiency by avoiding unnecessary copies or moves.
//Output: 10 15 20

#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.emplace(15); // Emplaces an element
    for(int x : s) {
        cout << x << " ";
    }
    return 0;
}