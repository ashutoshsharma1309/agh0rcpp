//5. Lower Bound =Get an iterator to the first element that is not less than the given key.
//Output: Lower Bound: 2: two

#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m = {{1, "one"}, {2, "two"}, {3, "three"}};
    auto it = m.lower_bound(2);
    cout << "Lower Bound: " << it->first << ": " << it->second;
    return 0;
}