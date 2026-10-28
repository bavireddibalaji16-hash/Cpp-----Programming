#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;
    // Arthemetic operator
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    // Comparision operator 
cout << "the value of a == b is " << (a == b) << endl;
cout << "the value of a != b is " << (a != b) << endl;
cout << "the value of a > b is " << (a > b) << endl;
cout << "the value of a < b is " << (a < b) << endl;
cout << "the value of a >= b is " << (a >= b) << endl;
cout << "the value of a <= b is " << (a <= b) << endl;
    // logical operator
    cout << "the value of ((a>b)&&(a>=b)) is "
     << ((a>b)&&(a>=b)) << endl;

cout << "the value of ((a>b)||(a==b)) is "
     << ((a>b)||(a==b)) << endl;

cout << "the value of (!(a==b)) is "
     << (!(a==b)) << endl;
    return 0;
}