#include <iostream>
using namespace std;

// finding odd no of 1s in binary operation of numbers btw factorial of two numbers

int main() {
    int NUM1, NUM2;
    cin >> NUM1 >> NUM2;

    int fact1 = 1, fact2 = 1;

    // NUM1!
    for (int i = 1; i <= NUM1; i++) {
        fact1 = fact1 * i;
    }

    // NUM2!
    for (int i = 1; i <= NUM2; i++) {
        fact2 = fact2 * i;
    }

    // Check every number between the two factorials
    for (int n = fact1; n >= fact2; n--) {

        int temp = n;
        int freq[1]=[100];

        // Count 1s in binary
        while (temp > 0) {
            if (temp % 2 == 1) {
                freq[1]++;
            }

            temp = temp / 2 ;
        }

        // Odd number of 1s
        if (freq[1] % 2 == 1) {
            cout << n << " " ;
        }
    }

    return 0 ;
}