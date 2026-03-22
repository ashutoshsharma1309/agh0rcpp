//2. Find = The find function searches for a specified element within the set. It returns an iterator pointing to the element if found, or to the end() of the set if the element is not present.
//Output: Found: 20

#include <bits/stdc++.h>
using namespace std;    
int main() {
    set<int> s = {10, 20, 30};
    auto it = s.find(20);
    if(it != s.end()) cout << "Found: " << *it;
    else cout << "Not Found";
    return ;   
}