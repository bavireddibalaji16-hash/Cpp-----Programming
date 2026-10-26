#include <iostream>
using namespace std;

int main() {
    int a = 10;

    int *p = &a;      // p stores address of a
    int **q = &p;     // q stores address of p

    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    cout << "**q = " << **q << endl;

    cout << "a = " << &a << endl;
    cout << "p = " << p << endl;
    cout << "*q = " <<*q << endl;



    return 0;
}