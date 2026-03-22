//Multimap= The `multimap` container allows storing multiple values for the same key in a sorted order.

//1. Equal Range = The equal_range function provides a range of elements with a specific key in a multimap. It returns a pair of iterators: the first iterator points to the first element with the specified key, and the second iterator points just past the last element with that key.
/*Expected Output:
1: one
1: uno*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<int, string> mm;
    mm.insert({1, "one"});
    mm.insert({1, "uno"});
    auto range = mm.equal_range(1);
    for(auto it = range.first; it != range.second; ++it) {
        cout << it->first << ": " << it->second << "\n";
    }
    return 0;
}