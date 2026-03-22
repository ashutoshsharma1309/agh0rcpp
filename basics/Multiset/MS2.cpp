//2. Erase= Remove elements from the multiset. All occurrences of the element will be removed.
//Output: 10

#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 20};
    ms.erase(20);  // Erase all occurrences of 20
    for(int x : ms) {
        cout << x << " ";
    }
    return 0;
}