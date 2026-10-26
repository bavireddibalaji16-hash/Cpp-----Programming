#include <iostream>
using namespace std;

// finding last person in a circle with n persons in a circle and moves k shifts for every move 

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[100];

    // Store people: 1, 2, 3, ..., n
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    int pos = 0;

    while (n > 1) {

        // Find person to remove
        pos = (pos + k - 1) % n;

        // Remove by shifting elements left
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;
    }

    cout << "Last person = " << arr[0];

    return 0;
}