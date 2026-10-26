#include<iostream>
using namespace std;
// writing a given int in binary form of base 10

 int division(int num,int n){

    int  place =1 ;
    int result;

     while(num>0){

    int digit = num%n;
     result = result + digit*place;

    place = place*10;
    num = num/n;
 }

 cout << result;

 return 0 ;

 }


int main(){

    int num ;
    cin >> num ;
    int n;
    cin >> n ;

    if ((num%n)!=0){
        cout << "number cannot be displayed" << endl;
    }
    else{
    division(num,n);
    }

    return 0;
 
}