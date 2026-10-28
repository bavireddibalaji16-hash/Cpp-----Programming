#include<iostream>
using namespace std;

int display(int arr[][10],int n){

    // finding freq of diff int in an matrix
  
    int visited[3][3];
    int x,y;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(visited[i][j]==1){
                continue;
            }
            int count =0;
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
           if(arr[i][j]==arr[x][y]){
            visited[x][y]=1;
            count++;
           }
        }
    }

      cout << arr[i][j] << " repeated " << count << " times\n";
}
     }
     return 0;
    }


int main(){

    int n;
    cin >> n;
    int arr[10][10];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }

    display(arr,n);

    return 0;
}