#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;

    // it will print duplicate elemnts too with rearrangment 
    
    ms.insert(30);
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.emplace(40);

    // Print elements
    for (int x : ms)
        cout << x << " ";

    cout << endl;

    // Find and count
    cout << "Count of 10: " << ms.count(10) << endl;

    // Lower and upper bound
    cout << *ms.lower_bound(10) << endl;
    cout << *ms.upper_bound(10) << endl;

    // Erase ONE occurrence of 10
    ms.erase(ms.find(10));

    for (int x : ms)
        cout << x << " ";

    return 0;
}