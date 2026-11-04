#include<iostream>
using namespace std;

//this is another method of sorting in ascending order by using DIVIDE AND CONQUER RULE 

void merge(int arr[],int start,int mid,int end){
    int arr1[100];
    int k=0;
    int i=start;
    int j=mid+1;

      while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            arr1[k++] = arr[i];
            i++;
        }
        else{
            arr1[k++] = arr[j];
            j++;
        }
    }

        while(i<=mid){
            arr1[k++] = arr[i];
            i++;
        }

        while(j<=end){
            arr1[k++] = arr[j];
            j++;
        }

        for(int a=0;a<k;a++){
            arr[start+a] = arr1[a];
        }
    
}

void mergesort(int arr[],int start,int end){

    // firstly we need to divide in recursive method 
    int mid = (start+end)/2;
    if(start>=end){
        return ;
    }
     // dividing it into two arr 
    mergesort(arr,start,mid);  // left part
    mergesort(arr,mid+1,end);  // right part
    // now we need to sort 
    merge(arr,start,mid,end);
}

int main(){
    int arr[6] = {12,31,35,8,32,17};
    int n=6;
    int start = 0;
    int end = n-1; 
    mergesort(arr,start,end); 
    
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}