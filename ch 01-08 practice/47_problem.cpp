#include<iostream>
#include<vector>
using namespace std;
// printing all the possible subsets of set 

void printsubset(vector<int>&arr,vector<int>&ans,int i){
    if(i==arr.size()){
        for(int val:ans){
          cout << val << " ";
        }
        cout << endl;
        return ;
    }

    ans.push_back(arr[i]); //include
    printsubset(arr,ans,i+1);
    ans.pop_back();  // backtracking
    printsubset(arr,ans,i+1); // exclude
 }


int main(){
    vector<int>arr={1,2,3,4};
    vector<int>ans;
    printsubset(arr,ans,0);
}

