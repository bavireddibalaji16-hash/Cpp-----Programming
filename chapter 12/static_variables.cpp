#include<iostream>
#include<string>
using namespace std;

void display(){
    static int x=0;
    cout << x << endl;
    x++;
}

int main(){
    display();
    display();
    display();
    return 0;
}


/* #include <iostream>
using namespace std;

class Student {
public:
    string name;
    static string college;
};

string Student::college = "NIT Warangal";

int main() {
    Student s1, s2;

    s1.name = "Balaji";
    s2.name = "Rahul";

    cout << s1.name << " " << s1.college << endl;
    cout << s2.name << " " << s2.college << endl;
    return 0;
} */





