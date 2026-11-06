#include<iostream>
#include<vector>
using namespace std;

// we can search targeted elemnet by repeatedly dividing the search area into two halves.

int rebinsear(vector<int>&arr,int start,int end,int target){
   if(start<=end){
    int mid = (start+end)/2;
    if(target >arr[mid]){
      start =mid+1;
      return rebinsear(arr,start,end,target);
    }
    else if(target<arr[mid]){
        end = mid-1;
        return rebinsear(arr,start,end,target);
    }
    else{
        target = arr[mid];
        return mid;
      }
    }
    return -1;
}

 void binarysearch(vector<int>&arr,int start,int end,int target){
    while(start<=end){
       int mid = (start+end)/2;
        if(target>arr[mid]){
            start = mid+1;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        else{
            target =arr[mid];
            cout << mid << endl;  
            return ;
        }
    }
}

int main(){

    vector<int>arr1={-10,-2,0,5,7,12}; // even elements
    int tar1 = 7;
    int start = 0;
    int end = 5;

    binarysearch(arr1,start,end,tar1);
   cout << rebinsear(arr1,start,end,tar1) << endl;  // recursive method 

    vector<int>arr2={-3,0,4,7,9,13,15}; // odd elements
    int tar2 =7;
    int st =0;
    int ed = 6;

    binarysearch(arr2,st,ed,tar2);
   cout << rebinsear(arr2,st,ed,tar2)<< endl;  // recursive method 

}