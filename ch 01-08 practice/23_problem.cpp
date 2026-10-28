#include<iostream>
#include<iomanip>
using namespace std;

// printing inverted triangle

int inverted(int n){

    for(int i=0;i<n;i++){
         cout <<setw(i+1);
        for(int j=n-i;j;j--){
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}

int main(){

    int n;
    cin >> n;

    inverted(n);
    return 0;
}