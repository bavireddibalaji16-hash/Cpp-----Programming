#include <iostream>
using namespace std;

// printing pascal's triangle

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {

        // spaces
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }

        // numbers
        int num = 1;

        for(int j = 0; j <= i; j++) {
            cout << num << " ";

            num = num * (i-j)/(j+1);
        }

        cout << endl;
    }

    return 0;
}