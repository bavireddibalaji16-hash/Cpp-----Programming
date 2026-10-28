#include<iostream>
using namespace std;
// finding max int in layer , row , column

int findmax(int arr[][10][10],int a,int b,int c){
     for(int i=0;i<a;i++){
        int max =0;
         for(int j=0;j<b;j++){
            for(int k=0;k<c;k++){
            if(arr[i][j][k]>max){
                max = arr[i][j][k];
               }
            }
        }
        cout << "maximum value in layyer " << i+1 <<" "<<  max << endl;
     }  



     for(int i=0;i<a;i++){ 
         for(int j=0;j<b;j++){
          int max =0;  // now max =0 after every row check
            for(int k=0;k<c;k++){
            if(arr[i][j][k]>max){
                max = arr[i][j][k];
                }
            }

            cout << "maximum value in row " << j+1 <<" "<<  max << endl;
        }
        
     }  
     
     
}

int main(){
int a,b,c;
cin >> a;
cin >>b;
cin >>c;

int arr[10][10][10];

for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        for(int k=0;k<c;k++){
            cin >> arr[i][j][k];
        }
    }
}

findmax(arr,a,b,c);

return 0;

}