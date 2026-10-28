#include<iostream>
using namespace std;

int maxsum(int arr[],int n){
    //finding max sum with sub arr in an arr
      int maxsum=arr[0]; 
      int start;
      int end;

    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            sum = sum+arr[j];
             if(sum>maxsum){
             maxsum = sum;
             
             start =arr[i];
             end = arr[j];
        }
    }
}
        cout << maxsum << " " << start << " " << end ;

        return 0;
}

int main(){

    int arr[100];
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
       cin >> arr[i];
    }

    maxsum(arr,n);

    return 0;
}