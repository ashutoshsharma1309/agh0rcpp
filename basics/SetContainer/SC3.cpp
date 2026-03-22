//3.Erase= The erase function removes elements from the set by specifying either an iterator pointing to the element or the element’s value directly. If an iterator is provided, it deletes the element at that position, while specifying a value will remove that value.
//Output: 10 30

#include <bits/stdc++.h>
using namespace std;
    
int main() {
    set<int> s = {10, 20, 30};
    s.erase(20);
    for(int x : s) {
        cout << x << " ";
    }
    return 0;
}