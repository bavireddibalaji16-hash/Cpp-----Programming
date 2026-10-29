
#include <iostream>
#include <set>
using namespace std;

// A website receives up to \(10^5\) visitor events. Each event contains a visitor ID.

int main() {
    set<int> visitors;
    string op;
    int id;

    while (cin >> op) {

        if (op == "VISIT") {
            cin >> id;
            visitors.insert(id);
        }

        else if (op == "CHECK") {
            cin >> id;

            if (visitors.find(id) != visitors.end())
                cout << "Visited" << endl;
            else
                cout << "Not visited" << endl;
        }

        else if (op == "TOTAL") {
            cout << visitors.size() << endl;
        }
    }

    return 0;
}
