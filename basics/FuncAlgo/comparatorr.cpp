//1.Comparator = A comparator is a function or functor that determines the order of elements during sorting or other operations.
//Output: 9 5 4 3 1 1

#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b) {
    return a > b; // Sort in descending order
}

int main() {
    vector<int> v = {3, 1, 4, 1, 5, 9};
    sort(v.begin(), v.end(), compare);
    for(int x : v) {
        cout << x << " ";
    }
    return 0;
}