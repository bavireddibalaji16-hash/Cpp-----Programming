#include<iostream>
using namespace std;

int main(){

    int age;
    cout << "enter your age: "<< endl;
    cin>> age ;

    switch(age){
        case (17) :
        cout << "you are not allowed to party"<< endl;
        break;
        case(19) :
        cout << "you are allowed to party "<<endl;
        break;
        default :
        cout << "you need to take permission"<<endl;
    }

    return 0;
}