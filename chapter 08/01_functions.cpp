#include<iostream>
using namespace std ;

int sum(int x,int y){
    int c=x*y;
    return c;
}

void show(){
    cout << "good morning guys ";
}

int main(){
int a=5;
int b=6;
int c = sum(a,b);
cout << c<<endl;
show();
return 0;
}