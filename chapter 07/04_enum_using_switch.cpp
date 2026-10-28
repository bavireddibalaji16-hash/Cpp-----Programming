#include <iostream>
#include <cstring>
using namespace std;

enum day {
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
};

int main() {

    char input[20];

    cout << "Enter the day: ";
    cin >> input;

    day today;

    if ( strcmp(input, "tuesday") == 0)
        today = monday;

    else if (strcmp(input, "tuesday") == 0)
        today = tuesday;

    else if (strcmp(input, "wednesday") == 0)
        today = wednesday;

    else if (strcmp(input, "thursday") == 0)
        today = thursday;

    else if (strcmp(input, "friday") == 0)
        today = friday;

    else if (strcmp(input, "saturday") == 0)
        today = saturday;

    else if (strcmp(input, "sunday") == 0)
        today = sunday;

    else {
        cout << "Not a day";
        return 0;
    }

    switch (today) {

        case monday:
            cout << "Monday";
            break;

        case tuesday:
            cout << "Tuesday";
            break;

        case wednesday:
            cout << "Wednesday";
            break;

        case thursday:
            cout << "Thursday";
            break;

        case friday:
            cout << "Friday";
            break;

        case saturday:
            cout << "Saturday";
            break;

        case sunday:
            cout << "Sunday";
            break;
    }

    return 0;
}