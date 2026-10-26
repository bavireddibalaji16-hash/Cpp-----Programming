
// we did single inheritence before so we just do multi hybrid inheritence now

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
        cout << "Person constructor\n";
    }
};

class Student : public Person {
protected:
    int rollNo;

public:
    Student(string n, int r) : Person(n) {
        rollNo = r;
        cout << "Student constructor\n";
    }
};

class Sports {
protected:
    int sportsMarks;

public:
    Sports(int s) {
        sportsMarks = s;
        cout << "Sports constructor\n";
    }
};

class Result : public Student, public Sports {
private:
    int academicMarks;

public:
    Result(string n, int r, int a, int s)
        : Student(n, r), Sports(s) {
        academicMarks = a;
        cout << "Result constructor\n";
    }

    void display() {
        cout << "\nName: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Academic Marks: " << academicMarks << endl;
        cout << "Sports Marks: " << sportsMarks << endl;
        cout << "Total Marks: "
             << academicMarks + sportsMarks << endl;
    }
};

int main() {
    Result r("Ravi", 101, 85, 10);
    r.display();

    return 0;
}
