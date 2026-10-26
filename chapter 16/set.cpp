
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 30, 50, 50, 20};

    // Set will remove duplicate elemnts and arrange them in descending order 

    // 1. Print elements
    for (int x : s)
        cout << x << " ";
    cout << endl;

    // 2. Insert and emplace
    s.insert(60);
    s.emplace(70);

    // 3. Size
    cout << "Size: " << s.size() << endl;

    // 4. Find
    if (s.find(30) != s.end())
        cout << "30 found" << endl;
    else
        cout << "30 not found" << endl;

    // 5. Count
    cout << "Count of 20: " << s.count(20) << endl;

    // 6. Lower and upper bound
    cout << "Lower bound: " << *s.lower_bound(30) << endl;   // Lower Bound is elemnet which is first  greater than or equal to given number 
    cout << "Upper bound: " << *s.upper_bound(30) << endl;   // Higher Bound is elemnt which is strictly greater than given number in set 

    // 7. Erase
    s.erase(40);

    // 8. Print after erase
    for (int x : s)
        cout << x << " ";
    cout << endl;

    // 9. Empty
    cout << "Empty: " << s.empty() << endl;

    // 10. Clear
    s.clear();
    cout << "Size after clear: " << s.size() << endl

    return 0;
}
