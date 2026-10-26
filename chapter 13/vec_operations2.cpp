#include<iostream>
#include<vector>
using namespace std;

int main(){

   //  vector<int>vec={1,2,3,4}; // vec contains theses are its elements
   //  vector<int>vec(3,10);     // vec contains 10 as its three elements 
   
       vector<int>vec1 ={1,2,3,4,5};
       vector<int>vec2(vec1);    // vec2 incorporates its elements from vec1
       for(int val : vec2){
        cout << val << " ";
     }
    return 0;
}