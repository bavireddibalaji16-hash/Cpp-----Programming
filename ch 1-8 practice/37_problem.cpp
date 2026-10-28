
#include <iostream>
using namespace std;

// normalisation  of inches into feet 

struct Distance {
    int feet;
    float inches;
};

Distance addDistance(const Distance& d1, const Distance& d2) {
    Distance d;

    d.feet = d1.feet + d2.feet;
    d.inches = d1.inches + d2.inches;

    while(d.inches >= 12) {
        d.feet++;
        d.inches -= 12;
    }

    return d;
}

int main() {
    Distance d1, d2, total;

    cout << "Enter first distance (feet inches): ";
    cin >> d1.feet >> d1.inches;

    cout << "Enter second distance (feet inches): ";
    cin >> d2.feet >> d2.inches;

    total = addDistance(d1, d2);

    cout << "First distance: " << d1.feet << " feet "
         << d1.inches << " inches\n";

    cout << "Second distance: " << d2.feet << " feet "
         << d2.inches << " inches\n";

    cout << "Total distance: " << total.feet << " feet "
         << total.inches << " inches\n";

    return 0;
}
