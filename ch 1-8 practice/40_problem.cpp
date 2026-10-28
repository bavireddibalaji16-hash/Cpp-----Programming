
#include <iostream>
#include <iomanip>
using namespace std;

struct Time {
    int hours, minutes, seconds;
};

Time difference(const Time& start, const Time& stop) {
    Time t;

    t.hours = stop.hours - start.hours;
    t.minutes = stop.minutes - start.minutes;
    t.seconds = stop.seconds - start.seconds;

    if (t.seconds < 0) {
        t.seconds += 60;
        t.minutes--;
    }

    if (t.minutes < 0) {
        t.minutes += 60;
        t.hours--;
    }

    return t;
}

int main() {
    Time start, stop, t;

    cout << "Enter start time (HH MM SS): ";
    cin >> start.hours >> start.minutes >> start.seconds;

    cout << "Enter stop time (HH MM SS): ";
    cin >> stop.hours >> stop.minutes >> stop.seconds;

    t = difference(start, stop);

    cout << "Elapsed time: " << t.hours << ":" << t.minutes << ":" << t.seconds << endl;

    return 0;
}
