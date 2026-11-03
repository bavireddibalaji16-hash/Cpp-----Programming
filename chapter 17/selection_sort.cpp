#include<iostream>
using namespace std;

// this is another method of sorting in asceding order using by PICKING MIN ELEMENT AND REARRANGING 

void selectsort(int arr[],int n){

    for(int i=0;i<n-1;i++){      // n-1 iterations for n elemnet array  
          int smallestindex = i;
        for(int j=i+1;j<n;j++){      
            if(arr[smallestindex]>arr[j]){
              smallestindex = j;
            }
        }
        swap(arr[i],arr[smallestindex]);  // picking  a min elemnst and replacing with first unsorted element 
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {4,1,2,5,3};
    int n =5;

    selectsort(arr,n);
}