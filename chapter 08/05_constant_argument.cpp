#include <iostream>
using namespace std;

int area(const int length, const int width) {

    // length =20; u cannot change value of length because it is already assigned it as 10

    return length * width;
}

int main() {
    int l = 10;
    int w = 5;

    cout << "Area = " << area(l, w);

    return 0;
}