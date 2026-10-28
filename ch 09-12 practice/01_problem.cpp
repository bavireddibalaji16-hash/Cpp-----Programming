#include<iostream>
#include<string>
using namespace std;

// finding total marks of students in a class 

class student{
    public:
    string name;
    int rollno;
    int marks;

    student(string n,int r,int m){
        name =n;
        rollno =r;
        marks =m;
    }
    int display(){
        cout << name << " " << rollno << " "<< marks << endl;  
    }
    int getmarks(){
        return marks;
    }

};


int main(){
    int sum=0;
    student s1("balaji",17,100);
    student s2("modi",19,220);
    student s3("rahul",12,22);

    student Student[]={s1,s2,s3};
    for(int i=0;i<3;i++){
        Student[i].display();
        sum =sum+Student[i].getmarks();
    }
    cout << sum ;

    return 0;
}