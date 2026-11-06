#include<iostream>
using namespace std;
int swap_by_reference(int*x,int*y){
    int t=*x;
    *x=*y;
    *y=t;
    cout<<"here is ur ans " << endl;
    return 0;
}

int swap_by_value(int x, int y){
    int t=x;
    x=y;
    y=t;
    return 0;
}

int main(){
    int a=6;
    int b=5;
    swap_by_value(a,b); // it dont change its location as we didnt gave its address 
    cout << a << " "<< b << endl;
    swap_by_reference(&a,&b); // as we gave address to it changes the location of a and b opp to each 
    cout << a << " " << b << endl;
    return 0;
}