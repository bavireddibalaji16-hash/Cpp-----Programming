#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    int marks;
    int *age;
    int *rank;

    Student(int r, int m, int a, int rk) {
        rollNo = r;
        marks = m;
        age = new int(a);
        rank = new int(rk);
    }

    // Deep copy constructor
    Student(const Student &org) {
        rollNo = org.rollNo;
        marks = org.marks;

        age = new int(*org.age);
        rank = new int(*org.rank);
    }
};

int main() {
    Student s1(101, 95, 18, 500);

    Student s2(s1);  // Deep copy

    s2.rollNo = 102;
    s2.marks = 80;
    *s2.age = 20;
    *s2.rank = 600;

    cout << "S1: " << s1.rollNo << " "
         << s1.marks << " "
         << *s1.age << " "
         << *s1.rank << endl;

    cout << "S2: " << s2.rollNo << " "
         << s2.marks << " "
         << *s2.age << " "
         << *s2.rank << endl;

    return 0;
}
