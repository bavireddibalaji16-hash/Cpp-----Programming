#include<iostream>
using namespace std;

// finding  90 degrees clockwise rotation of a matrix

int clockwise(int arr[][10] , int num){

    for(int j=0;j<num;j++){
        for(int i=num-1;i>=0;i--){
      cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "enter the value of n is " ;
    cin >> n;
   int  arr[10][10];

   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cin >> arr[i][j];
      }
   }
   clockwise(arr,n);
}