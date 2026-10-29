
#include <iostream>
#include <iomanip>
using namespace std;

// time diff between two intervals 

// this is when function is out of structure  

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

    t = difference(start, stop);     // we can call it by like this as it was a function just returing time struct 

    cout << "Elapsed time: " << t.hours << ":" << t.minutes << ":" << t.seconds << endl;

    return 0;
}

// this is when function is inside the struct


struct Time {
    int hours, minutes, seconds;

    Time difference(const Time& stop) {
        Time t;

        t.hours = stop.hours - hours;
        t.minutes = stop.minutes - minutes;
        t.seconds = stop.seconds - seconds;

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
};


int main() {
    Time start, stop, t;

    cout << "Enter start time (HH MM SS): ";
    cin >> start.hours >> start.minutes >> start.seconds;

    cout << "Enter stop time (HH MM SS): ";
    cin >> stop.hours >> stop.minutes >> stop.seconds;

    t = start.difference(stop);     // we need to call it by structure as function is inside 

    cout << "Elapsed time: " << t.hours << ":"
         << t.minutes << ":" << t.seconds << endl;

    return 0;
}
