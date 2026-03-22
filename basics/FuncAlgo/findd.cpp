//4.Find = The `find` function searches for the first occurrence of a value in a range [first, last] and returns an iterator to it.
//Output: Found: 3

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    auto it = find(v.begin(), v.end(), 3);
    if(it != v.end()) cout << "Found: " << *it;
    else cout << "Not Found";
    return 0;
}
