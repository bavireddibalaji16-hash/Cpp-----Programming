#include<iostream>
using namespace std;

// It's still a function; it also has special rules that allow its definition to appear in multiple source files.
inline int max(int x,int y){
    return (x>y) ? x:y ;
}

int main(){
    int a=25;
    int b=28;
    int c = max(a,b);
    cout << c ;
    return 0;
}