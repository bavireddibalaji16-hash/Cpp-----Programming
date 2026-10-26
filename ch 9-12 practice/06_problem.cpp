#include<iostream>
#include<string>
using namespace std;

// Multilevel Inheritance — Student Results

class person{
    public :
    string name;
    double age;
    person(string n , double a){
        name = n;
        age = a;
    }
};

class student : public person{
    public :
    double rollno;
    student(string name, double age , double rollno) : person(name, age ){
        this->rollno = rollno;
    }
};

class result : public student{
    private :
    double m1,m2,m3;
    public :
    result(string name, double age , double rollno,double m1,double m2,double m3):student( name,  age ,  rollno){
        this->m1=m1;
        this->m2=m2;
        this->m3=m3;
    }
    double average(){
       return m1+m2+m3/3;
    }
    void display(){
        cout << name << " " << age << " " << rollno << " " << m1 << " " << m2 <<" " << m3 <<" "<< average()<< endl; 
    }
};


int main(){
result r1("balaji",18,17,80,75,63);
r1.display();
return 0;
}



