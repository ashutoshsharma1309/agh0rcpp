//3.Erase = The erase function removes elements from an unordered_set by specifying either an iterator pointing to the element or the element’s value directly.
//Output: Elements printed in any order, e.g., 10 30

#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> us = {10, 20, 30};
    us.erase(20);
    for(int x : us) {
        cout << x << " ";
    }
    return 0;
}