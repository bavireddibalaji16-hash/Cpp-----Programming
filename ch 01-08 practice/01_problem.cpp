#include<iostream>
using namespace std;

// distributing the total strenght of college into students, faculty ,dean and a director 

/* atmost  20 students have one faculty 
   atmost   5 faculty  have one dean */
   
int main(){
    int n;
    cin >> n;
    cout << "\n";

    int director = 1;
    int remaining = n - 1;

    int deans = 0;
    int faculty = 0;
    int students = 0;

    // Find maximum number of deans possible
    deans = remaining / 89;

    if (deans == 0 && remaining >= 2)
        deans = 1;

    if (n < 2) {
        deans = 0;
        faculty = 0;
        students = 0;
    }
    else {
        remaining -= deans;

        // Allocate faculty, maximum 5 per dean
        faculty = remaining / 21;

        if (faculty > deans * 5)
            faculty = deans * 5;

        remaining -= faculty;

        // Remaining people are students
        students = remaining;
    }

    cout << "Students = " << students << endl;
    cout << "Faculty = " << faculty << endl;
    cout << "Deans = " << deans << endl;
    cout << "Director = " << director << endl;

    return 0;
}


   