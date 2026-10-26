#include<iostream>
using namespace std;

// finding the max number to right of num in arr if its not present  print -1

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
    cin >> arr[i];
    cout << endl;
    }

    for(int i=0;i<n;i++){
        int max =0;
        for(int j=i;j<n;j++){
       if(arr[j]>max){
        max = arr[j];
       }
        }
        if(max == arr[i]){
            cout << -1 << endl;
        }
        else{
            cout << max << endl;
        }
    }

    return 0;

}