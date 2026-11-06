#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// sorting of  elements in containers

bool comparator(pair<int,int>p1,pair<int,int>p2){
    if(p1.second < p2.second){
        return true;
    }
    else if(p1.second > p2.second) {
        return false;
    }
    else if(p1.first < p2.first ){
        return true;
    }
    else{
        return false;
        }
    }

int main(){

// sort(arr,arr+n) which will arrange in ascending order 
int arr[5] ={1,7,5,3,9};
sort(arr,arr+5);
for(int val:arr){
    cout << val << " ";
  }
  cout << endl;

vector<int>vec={1,7,5,3,9};
sort(vec.begin(),vec.end());
for(int val : vec){
    cout << val << " " ;
   }
   cout << endl;

// sort(arr,arr+n,greater<int>()) which will arrange in descening order
   sort(arr,arr+5,greater<int>());
   for(int i=0;i<5;i++){
    cout << arr[i] << " " ;
   }
   cout << endl;

   vector<pair<int,int>>vec1={{2,4},{1,5},{7,2},{5,3}};
   sort(vec1.begin(),vec1.end());  // arranged in ascending order by first elemnt
   for(auto val : vec1){
    cout << val.first << " " << val.second << endl ;
   }
   
// sorting the vector with respect to second elemnt in descending order 
   sort(vec1.begin(),vec1.end(),comparator);  // custom comparator
    for(auto val : vec1){
        cout << val.first  << " " << val.second << endl;
    }
    cout << endl;

}