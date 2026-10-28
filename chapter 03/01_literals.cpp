#include<iostream>
using namespace std;
int c=45;
int main(){
  /* int a,b,c;
    cout << "a is " << endl;
    cin >> a ;
    cout << "b is " << endl;
    cin >> b ;
    c=a+b;
    cout << c << endl;
    cout << "global value of c is " << ::c << endl; */



     float d=34.5;
    float e=34.5f;
    float f=34.5F;
    long double g= 34.4;
    long double h= 34.4l;
    long double i= 34.4L;
    double j= 34.4;
    cout << "the value of d is " << d << endl << "the value of e is " << e << endl;
    cout << "size of d is " << sizeof(34.5) << endl;
    cout << "size of e is " << sizeof(34.5f) << endl;
    cout << "size of f is " << sizeof(34.5F) << endl;
    cout << "size of g is " << sizeof(34.4) << endl;
    cout << "size of h is " << sizeof(34.4l) << endl;
    cout << "size of i is " << sizeof(34.4L) << endl;
    cout << "size of j is " << sizeof(34.4l) << endl; // it treat as long double 
    
    return 0;
}
