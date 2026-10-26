#include <iostream>
using namespace std;

//  Compile Time polymorphism 

//  Function type polymorphism

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {

    Calculator c;

    cout << c.add(2, 3) << endl;  // it depends on which copy constructor to be selected
    cout << c.add(2, 3, 4);
}






