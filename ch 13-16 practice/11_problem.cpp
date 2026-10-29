
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    multimap<int, string> m;
    string op, name;
    int marks;

    while (cin >> op) {
        if(op =="ADD"){
            cin >> name >> marks;
            m.insert({marks, name});
        }

        else if (op == "EXACT") {
            cin >> marks;

            for (auto x : m) {
                if (x.first == marks)
                    cout << x.second << " " << x.first << endl;
            }
        }

        else if (op == "ATLEAST") {
            cin >> marks;

            for (auto x : m) {
                if (x.first >= marks)
                    cout << x.second << " " << x.first << endl;
            }
        }

        else if (op == "REMOVE") {
            cin >> name;

            for (auto it = m.begin(); it != m.end(); it++) {
                if (it->second == name) {
                    m.erase(it);
                    break;
                }
            }
        }
    }
    return 0;
}

    
