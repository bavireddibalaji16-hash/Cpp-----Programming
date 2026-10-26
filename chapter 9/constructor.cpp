#include<iostream>
#include<string>
using namespace std;

// NON PARAMETERIZED 

/* class student{
    private:
    int roll_no;

    public:
    string name;
    string dept;

    // non-paramaterized 
    student(){
        cout << "hi i am constructor" << endl;
        dept = "cse";
    }

    void display(){
        cout << name << " " << dept << " " << endl ;       
    }

    double setroll_no(double s){
        roll_no = s;
        return roll_no;
    }
   
};

int main(){
student s1;  // constructor call

 s1.name = "balaji";
 s1.display();  

cout << s1.setroll_no(17);

return 0;

} */


// PARAMETRIZED 

class student{
    private:
    int roll_no;

    public:
    string name;
    string dept;

    student (string n,string d,double sal){
        name = n;
        dept = d;
        roll_no = sal;
    }

    void getinfo(){
        cout <<name << " " << dept << " " << roll_no << endl;
    }

};

int main(){
    student s1("balaji","cse",25000);
    s1.getinfo() ;
    return 0;
}