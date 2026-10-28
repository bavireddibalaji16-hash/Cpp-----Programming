#include <iostream>
using namespace std;

// Predict the outcome 

class A {
public:
    int x;

    A() : x(10) {
        cout << "A ";
    }

    void show() {
        cout << x << " ";
    }
};

class B : public A {
public:
    int x;

    B() : x(20) {
        cout << "B ";
    }

    void show() {
        cout << x << " ";
    }
};

int main() {
    B obj;
    obj.show();
    obj.A::show();
}