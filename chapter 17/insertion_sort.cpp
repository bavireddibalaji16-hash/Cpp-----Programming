#include<iostream>
using namespace std;

// this is another method of sorting in ascending order by PICKING FIRST ELEMENT FROM UNSORTED PORTION AND INSERT INTO CORRECT POSITION IN SORTED PORTION

void insertionsort(int arr[],int n){
     for(int i=1;i<n;i++){
        
         int current = arr[i];
         int prev = i-1;

         while(prev >=0 && arr[prev]>current){
            arr[prev+1] = arr[prev];
            prev--; 
         }

         arr[prev+1] = current;   // placing it in correct position 
     }

     for(int i=0;i<n;i++){
        cout << arr[i] << " ";
     }
}

int main(){
    int n = 5;
    int arr[] = {4,1,5,2,3};

    insertionsort(arr,n);
    return 0;
}