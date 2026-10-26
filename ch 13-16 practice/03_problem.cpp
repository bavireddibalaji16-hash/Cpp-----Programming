
#include <iostream>
#include <set>
using namespace std;

 // 3. Find Elements Within a Range

int main() {
    set<int> s = {10, 20, 30, 40};

    int x;
    cin >> x;

    auto lb = s.lower_bound(x);
    auto ub = s.upper_bound(x);

    if (lb != s.end())
        cout << "Lower bound: " << *lb << endl;
    else
        cout << "Lower bound: Not found" << endl;

    if (ub != s.end())
        cout << "Upper bound: " << *ub << endl;
    else
        cout << "Upper bound: Not found" << endl;

    return 0;
}
