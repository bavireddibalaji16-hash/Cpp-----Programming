#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us;
   
    // unordered_set will not rearrange into ascending order 

    us.insert(30);
    us.insert(10);
    us.insert(20);
    us.insert(10);
    us.emplace(40);

    // Print elements
    for (int x : us)
        cout << x << " ";

    cout << endl;

    // Find
    if (us.find(20) != us.end())
        cout << "Found" << endl;

    // Count
    cout << "Count of 10: " << us.count(10) << endl;

    // Erase
    us.erase(30);

    // Size
    cout << "Size: " << us.size() << endl;

    // Clear
    us.clear();

    cout << "Empty: " << us.empty() << endl;

    return 0;
}