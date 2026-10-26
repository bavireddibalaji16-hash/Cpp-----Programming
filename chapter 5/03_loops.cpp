#include<iostream>
using namespace std;

int main(){
    /* there are three types of loops :
    1. while loop
    2.do whil loop 
    3.for loop */

    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    } 


    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (false); // dowhile execute atleast once 
    

    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    } 

return 0;
   
}