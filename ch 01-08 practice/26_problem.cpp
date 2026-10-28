#include<iostream>
using namespace std;

// creating hollow rectangle 

int hollowrect(int n,int m){
    for(int i=0;i<n;i++){
    cout << "*";
    }
    cout << endl;

    for(int i=0;i<m-2;i++){
     cout <<"*";
     for(int j=0;j<n-2;j++){
        cout << " ";
     }
     cout <<"*";
     cout << endl;
    }

    for(int i=0;i<n;i++){
    cout << "*";
    }

return 0;
}


int main(){

    int n;
    int m;
    cin >>n>>m;
    hollowrect(n,m);
    return 0;
}