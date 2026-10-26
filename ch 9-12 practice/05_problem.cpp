#include<iostream>
#include<string>
using namespace std;

// Inheritance — Employee Salary System

class employee{
    private :
    double base;
    public:
    string name;
    employee(string name, double base) {
        this->name = name;
        this->base = base;
    }
    double getbase(){
       return base;
    }
};

class manager : public employee {
    private :
    double bonus;
    public :
    manager(string name,double base,double bonus) : employee(name,base){
        this->bonus = bonus;  
   }
   void display(){
   cout << name <<" " <<  getbase()+bonus << endl;
   }
};

class devop : public employee {
    private :
    double allow;
    public :
    devop(string name,double base,double allow) : employee(name,base){
        this->allow = allow;
   }
   void display(){
   cout << name << " " << allow + getbase() << endl;
   }
};


int main(){
    manager m1("balaji",5400000,1800000);
    devop d1("varun",54000000,900000);
    m1.display();
    d1.display();

    return 0;

}
