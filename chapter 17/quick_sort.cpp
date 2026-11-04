#include<iostream>
#include<vector>
using namespace std;

// this is another method of sorting ascending order by PARTION AROUND PIVOT 

int partition(int arr[],int start,int end){
    int index = start-1;
    int pivot = arr[end];

    for(int i=start;i<end;i++){
        if(arr[i]<=pivot){
            index++;
            swap(arr[i],arr[index]);
        }
    }
    index++;
    swap(arr[end],arr[index]);
      return index;
}


void quicksort(int arr[],int start,int end){

    if(start<end){
        int pivindex = partition(arr,start,end);
    quicksort(arr,st,pivindex-1);  // left half
    quicksort(arr,pivindex+1,end); // right half
  }
}


int main(){
  vector <int> arr = {12,31,35,8,32,17};
  quicksort(arr,0,(arr.size()-1));

  for(int val : arr){
    cout << val << " ";
  }

  return 0;
}