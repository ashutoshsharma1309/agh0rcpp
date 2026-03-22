//1. Sort = The `sort` function in C++ sorts elements in a given range [first, last] into ascending order by default.
//Output: 1 1 3 4 5 9

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {3, 1, 4, 1, 5, 9};
    sort(v.begin(), v.end());
    for(int x : v) {
        cout << x << " ";
    }
    return 0;
}

