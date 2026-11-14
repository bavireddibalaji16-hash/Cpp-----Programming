#include<iostream>
using namespace std;
#include<vector>

int search(vector<int>&vec,int tar,int m,int n ){
    int mid = m+n/2;
    if(tar >vec[mid]){
         m=mid+1;
       return search(vec,tar,m,n);
    }
    else if(tar < vec[mid]){
        n = mid-1;
        return search(vec,tar,m,n);
    }
    else if (tar==vec[mid]){
        cout << "index of target is " <<endl;
        return mid;
    }
    else{
        return -1;
    }
}

int main(){
 vector<int>vec={2, 5, 8, 12, 16, 23, 38};
 int tar = 23;
 int n = vec.size()-1;
 int m =0;

 cout << search(vec,tar,m,n);
 
}