#include <iostream>
using namespace std;

int main() {
    // using while loop 
    /* int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    int i = 0;
    while (i < 5) {
        cout << *p << " ";
        p++;
        i++;
    } */

  
    int arr[5] = {10, 20, 30, 40, 50};

    int *p = arr;
    int i = 0;

    do {
        cout << *p << " ";
        p++;
        i++;
    } while (i < 5);

    
    return 0;
}