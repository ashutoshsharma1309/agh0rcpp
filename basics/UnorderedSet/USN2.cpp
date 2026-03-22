//2.Find = Search for an element in the unordered_set.
//Output: Found: 20

#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> us = {10, 20, 30};
    auto it = us.find(20);
    if(it != us.end()) cout << "Found: " << *it;
    else cout << "Not Found";
    return 0;
}