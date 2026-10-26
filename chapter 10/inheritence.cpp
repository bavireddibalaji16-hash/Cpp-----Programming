#include<iostream>
#include<string>
using namespace std;

 class person{
    public:
    string name;
    int age;

    person(){
        cout <<"parent constructor"<<endl;
    }
    
};

class student: public person{
    public:
    int rollno;
    student(){
    cout<< "child constructor" << endl; // it wont print as it looks for parameterized constructor
    }
    student(string name,int age){
        this->name=name;
        this->age=age;      
    }
    void display(){
        cout << name << " "<< age << " "<< rollno << endl;
    }

};

int main(){
    student s1("balaji",18);
    s1.rollno = 17;
    s1.display();
    return 0;
} 


// Another way 



/* class person{
    public:
    string name;
    int age;

    person(string name,int age){
        this->name=name;
        this->age = age;
    }
    person(){
        cout<<"parent constructor"<<endl; // it dont print this as above reason
    }
};

class student:public person{
    public:
    int rollno;
    student(string name,int age,int rollno): person(name,age){
        this->rollno=rollno;
    }
    student(){
        cout << "hello guys"<<endl; // it dont print this as above reason 
    }
    void display(){
        cout << name << " "<< age << " "<< rollno << endl;
    }
};


int main(){
    student s1("balaji",18,17);
    s1.display();
    return 0;
} */