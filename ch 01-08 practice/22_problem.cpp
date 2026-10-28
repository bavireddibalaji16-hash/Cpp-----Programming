#include<iostream>
using namespace std;

// printing inverted pyramid triangle

int inverted(int n){

    for(int i=n;i;i--){
        for(int k=0;k<=n-i;k++){
                cout << " ";
        }
        for(int j=2*i-1;j;j--){
            cout <<"*";
        }
      cout << endl;
    }
}

int main(){
 int n;
 cin >>n;
inverted(n);
return 0;
}