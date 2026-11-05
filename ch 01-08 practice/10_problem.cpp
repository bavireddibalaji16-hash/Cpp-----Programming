#include<iostream>
using namespace std;
// writing a given int in binary form of base n

 int division(int num,int n){

    int  place =1 ;
    int result =0;

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

    if (n<2 || n>10){
        cout << "Invalid Base" << endl;
    }
    else{
    division(num,n);
    }

    return 0;
 
}