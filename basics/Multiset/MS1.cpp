//Multiset = The `multiset` container allows storing multiple occurrences of the same element. It is useful when you need to keep duplicates and still maintain sorted order.

//1.Insert = Inserting elements into a multiset is similar to a set, but it allows multiple occurrences of the same element. The insert function can be used to add elements, and unlike a set, it does not enforce uniqueness. This makes it ideal for scenarios where duplicate values are needed while still maintaining the sorted order of elements.
//Output: 10 20 20

#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);  // Duplicate element
    for(int x : ms) {
        cout << x << " ";
    }
    return 0;
}