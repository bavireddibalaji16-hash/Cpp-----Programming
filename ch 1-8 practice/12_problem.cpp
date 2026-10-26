#include<iostream>
using namespace std;

// finding of transpose of matrix

int transpose(int arr[][10] , int num){

    for(int j=0;j<num;j++){
        for(int i=0;i<num;i++){
      cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
   int  arr[10][10];

   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cin >> arr[i][j];
      }
   }
   transpose(arr,n);
   return 0;
}