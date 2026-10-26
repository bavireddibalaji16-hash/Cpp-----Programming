#include<iostream>
using namespace std;
int main(){
    int x=2;
    int & y = x;
    cout << x << endl << y << endl;
     y=6;
    cout << y << endl << x ; // y and x belongs to same memory and value by refernce call 

    return 0;
}