#include <iostream>
using namespace std;

int sum(int a,int b=10){
int c=a*b;     // if u dont give value then c++ uses the default value  
cout << c ;    
return 0;
}

int main(){
    sum(5);   // in above if u give a=10 then it would be a blunder as it checks from left to right
    return 0;
}