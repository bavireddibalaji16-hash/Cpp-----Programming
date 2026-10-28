#include <iostream>
#include <string>
using namespace std;

// grade of a student in a semester of 5 subjects

struct Student {
    int rollNo;
    string name;
    int marks[5];

    char calculateGrade() {
        int total = 0;
        for (int i = 0; i < 5; i++)
            total += marks[i];

        int avg = total / 5;

        if (avg >= 85) return 'A';
        else if (avg >= 70) return 'B';
        else if (avg >= 50) return 'C';
        else return 'F';
    }
};

int main() {
    Student s;
    int total = 0;

    cin >> s.rollNo;
     cin.ignore();
    getline(cin, s.name);

    for (int i = 0; i < 5; i++) {
        cin >> s.marks[i];
        total += s.marks[i];
    }

    cout << "Roll No: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Total: " << total << "/500" << endl;
    cout << "Percentage: " << total / 5.0 << "%" << endl;
    cout << "Grade: " << s.calculateGrade() << endl;

    return 0;
}