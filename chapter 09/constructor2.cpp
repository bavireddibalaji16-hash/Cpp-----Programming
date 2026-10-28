#include <iostream>
using namespace std;

class student {
private:
    double salary;
public:
    string name;
    string dept;
    string sub;

    student(string name,string dept,string sub,double salary){
        cout << "hello guys\n";
        this->name = name;
        this->dept = dept;
        this->sub = sub;
        this->salary = salary;
    }

    // copy constructive 
     student(student &org){
        cout << "i am custom copy instructor ...\n";
        this->name = org.name;
        this->dept = org.dept;
        this->sub = org.sub;
        this->salary = org.salary;
    } 

    void display() {
        cout <<name <<" "<<dept<<" "<<sub<<" "<<salary<<endl;
    }
};

int main() {
    student s1("balaji","cse","C++",600000);
    student s2(s1);  // default copy constructive - invoke
    s1.display();
    s2.display();
    return 0;
}  



