#include<iostream>
using namespace std;

// This is one of the normal methods to sort in ascending order by comaparing an elemnt with other elemnts 

/* int main(){
    int arr[5] ={4,5,1,3,6};
    int n=5;

    for(int i=0;i<n;i++ ){
      for(int j=0;j<n;j++){
         if(arr[j]>arr[i]){
            int t = arr[j];
            arr[j] = arr[i];
            arr[i] = t;
         }
      }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

} */


// Now we disscuss about bubble sorting which is sorted in ascending order by COMPARING WITH ADJECENT ELEMENTS


void bubblesort(int arr[],int n){

     bool isswap = false;

    for(int i=0;i<n-1;i++){       // bubble sort will have n-1 iterations 
        for(int j=0;j<n-i-1;j++){    // for each iteration we have  max n-i-1  checks 
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
                isswap = true;
            }
        }
    }

    if(!isswap){  
        cout << "array was already sorted ";
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
}

int main(){
    int arr[] ={4,1,2,5,3};
    int n =5;
    bubblesort(arr,n);
}