#include <iostream>
using namespace std;

// comparing two dates  

struct Date {
    int day, month, year;

    bool isValid() const {
        if (month < 1 || month > 12 || day < 1)
            return false;

        int days;

        if (month == 2) {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                days = 29;
            else
                days = 28;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            days = 30;
        else
            days = 31;

        return day <= days;
    }
};

bool isEarlier(const Date& d1, const Date& d2) {
    if (d1.year != d2.year)
        return d1.year < d2.year;

    if (d1.month != d2.month)
        return d1.month < d2.month;

    return d1.day < d2.day;
}

int main() {
    Date d1, d2;

    cout << "Enter first date (DD MM YYYY): ";
    cin >> d1.day >> d1.month >> d1.year;

    cout << "Enter second date (DD MM YYYY): ";
    cin >> d2.day >> d2.month >> d2.year;

    if (!d1.isValid() || !d2.isValid()) {
        cout << "Invalid date entered." << endl;
    }
    else if (isEarlier(d1, d2)) {
        cout << "First date is earlier." << endl;
    }
    else if (isEarlier(d2, d1)) {
        cout << "Second date is earlier." << endl;
    }
    else {
        cout << "Both dates are equal." << endl;
    }

    return 0;
}