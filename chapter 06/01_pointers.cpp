#include <iostream>
using namespace std;

// functional pointers 

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {

    int (*operation)(int, int);

    operation = add;  // operation points towards add function 
    cout << operation(10, 5) << endl;

    operation = subtract;
    cout << operation(10, 5) << endl;

    return 0;
}