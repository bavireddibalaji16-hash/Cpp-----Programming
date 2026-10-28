// there are two types of headers 
// 1. system header files : it comes with compiler
#include<iostream>
// 2.user defined header files : written by user 
#include "this.h" // this will produce error if "this.h" s no present in current  directory 
using namespace std;
int main(){
cout << "hello program "<<endl;
return 0;
}
