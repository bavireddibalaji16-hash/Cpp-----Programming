#include <iostream>
using namespace std;

// all contiguous subarrays whose sum is equal to a given target value

int main() {
    int n, target;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;

    for (int i = 0; i < n; i++) {

        int sum = 0;

        for (int j = i; j < n; j++) {

            sum += arr[j];

            if (sum == target) {
                cout << "Starting position: " << i
                     << " Ending position: " << j << endl;
            }
        }
    }

    return 0;
}