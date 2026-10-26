#include<iostream>
using namespace std;
// finding whether given num has alternate even and odd digits

int check(int n){

while(n>0)
{
    int digit = n%10;

    
    if((n%10)%2==1 && ((n/10)%10)%2==1){
     cout << "no alternate even and odd numbers";
    return 0;
      }

    else if ((n%10)%2==0 && ((n/10)%10)%2==0){
        cout << "no alternate even and odd numbers";
        return 0;
      }
     n=n/10;
}

cout << "num is having alternative even and odd numbers" << endl;

    return 0;
}



int main(){
    int num;
    cin >> num ;

    check(num);

    return 0;
}