#include <iostream>
using namespace std;

int main() {
    int a = 10;

    int *p = &a;

    cout << "Value of a = " << a << endl;
    cout << "Address of a = " << &a << endl;
    cout << "Value of p = " << p << endl;
    cout << "Value at p = " << *p << endl;
    cout << "Value of p = " <<(unsigned long long) p << endl;

    return 0;
}