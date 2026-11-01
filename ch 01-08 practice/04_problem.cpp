#include <iostream>
using namespace std;

// finding numbers btw factorails of two numbers having odd 1's in its binary representation 

int main() {
    int NUM1, NUM2;
    cin >> NUM1 >> NUM2;

    int fact1 = 1, fact2 = 1;

    for (int i = 1; i <= NUM1; i++)
        fact1 *= i;

    for (int i = 1; i <= NUM2; i++)
        fact2 *= i;

    for (int n = fact1; n >= fact2; n--) {

        int temp = n;
        int freq[1] = {0};

        while (temp > 0) {
            if (temp % 2 == 1)
                freq[1]++;

            temp /= 2;
        }

        if (freq[1] % 2 == 1)
            cout << n << " ";
    }

    return 0;
}