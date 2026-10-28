#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    int roll_no;

    public:
    string name;
    string dept;

    void display(){
        cout << name << " " << dept << " " << endl ;       
    }

    double setroll_no(double s){
        roll_no = s;
        return roll_no;
    }
   
};

int main(){
student s1;
s1.name = "balaji";
s1.dept = " cse";
s1.display();

cout << s1.setroll_no(17);

return 0;

}