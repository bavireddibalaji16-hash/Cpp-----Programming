#include<iostream>
#include<string>
using namespace std;

/* class teacher{
    // private wont allow outside members to see its information
private:
    double salary;
    // public allows outside members to see its information
public:
    string name;
    string dept;
};

int main(){
    teacher t1;
    t1.name="balaji";
    t1.dept = "cse";
    t1.salary = 30000; // this will not allow to print 

    cout << t1.name << " " << t1.dept << " "<< t1.salary ;
    return 0;
} */


// ANOTHER WAY tO WRITING 

class student{
    public:
    string name;
    string dept;
    int roll_no;

    void display(){
        cout << name << " " << dept << " " << roll_no ;       
    }
};

int main(){
student s1;
s1.name = "balaji";
s1.dept = " cse";
s1.roll_no = 17;
s1.display();
return 0;
}

