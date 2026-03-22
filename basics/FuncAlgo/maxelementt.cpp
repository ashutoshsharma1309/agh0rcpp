//7.Max Element = The `max_element` function returns an iterator to the largest element in a range [first, last].
//Output: Max Element: 9

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 5, 3, 9, 7};
    auto it = max_element(v.begin(), v.end());
    cout << "Max Element: " << *it;
    return 0;
}
