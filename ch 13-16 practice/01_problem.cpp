
#include <iostream>
#include <set>
using namespace std;

 // 1. Second Largest Element

int main() {
    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    if (s.size() < 2) {
        cout << -1;
    }
    else {
        auto it = s.rbegin();
        ++it;
        cout << *it;
    }

    return 0;
}
