//5.Upper Bound= Get the iterator to the first element that is greater than the given value.
//Output: Upper Bound: 30

#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {10, 20, 30};
    auto it = s.upper_bound(20);
    cout << "Upper Bound: " << *it;
    return 0;
}