
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

/*
// multi map

int main() {
    multimap<string, int> m;

    // it will print multiple keys with multiple values like laptop 

    m.insert({"laptop", 50000});
    m.insert({"mobile", 20000});
    m.insert({"laptop", 60000});
    m.insert({"tablet", 15000});

    m.erase("laptop");

    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
} */



// unordered map

int main() {
    unordered_map<string, int> m;

    // it prints in the order u gave the key 

    m["laptop"] = 50000;
    m["mobile"] = 20000;
    m["tablet"] = 15000;
    m["laptop"] = 25000; // here value will be updated 

    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
  
