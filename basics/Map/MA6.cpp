//6.Upper Bound= Get an iterator to the first element that is greater than the given key.
//Output: Upper Bound: 3: three

#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m = {{1, "one"}, {2, "two"}, {3, "three"}};
    auto it = m.upper_bound(2);
    cout << "Upper Bound: " << it->first << ": " << it->second;
    return 0;
}