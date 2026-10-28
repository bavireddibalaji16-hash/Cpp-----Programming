#include<iostream>
#include<string>
using namespace std;

// showing how constructor and destructor works;
class demo{
    public :
   
    demo(){
        cout << "constructor runs \n";
    }
    ~demo(){
        cout << "destructive runs \n";
    }
};

int main(){
    demo a1;
    demo a2;
    {
    demo a3;
    demo a4;
    }
    demo a5;
   
    return 0;
}