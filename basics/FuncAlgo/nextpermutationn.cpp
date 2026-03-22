//6. Next Permutation = The `next_permutation` function rearranges elements into the next lexicographically greater permutation. If the current permutation is the largest, it transforms it into the smallest permutation.
//Output: 1 3 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    next_permutation(v.begin(), v.end());
    for(int x : v) {
        cout << x << " ";
    }
    return 0;
}
