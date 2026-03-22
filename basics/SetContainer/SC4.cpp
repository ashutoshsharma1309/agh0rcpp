//4. Lower Bound = Get the iterator to the first element that is not less than the given value.
//Output: Lower Bound: 20

#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {10, 20, 30};
    auto it = s.lower_bound(20);
    cout << "Lower Bound: " << *it;
    return 0;
}