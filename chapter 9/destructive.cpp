#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    int age;
    int*marks;
    double*fee;

    student(string name,int age,int marks,double fee){
        cout<<"hello"<<endl;
        this->name=name;
        this->age = age;
        this->marks = new int(marks);
       this-> fee = new double(fee);
    }

    student(const student &org){
        cout << "hello guys"<<endl;
        this->name=org.name;
        this->age = org.age;
       this->  marks = new int(*(org.marks));
       this-> fee = new double(*(org.fee));
    }

     void intinfo() {
        cout << name << " "
             << *marks << " "
             << age << " "
             << *fee << endl;
    }

    ~student(){
        delete marks;
        delete fee;

        cout << "Destructor called\n";
    }


};

int main(){
    student s1("balaji",18,210,92000);
    student s2(s1);
    s2.name = "unknown";
    *(s2.marks)=205;

    s1.intinfo();
    s2.intinfo();
    return 0;
}