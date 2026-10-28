#include<iostream>
using namespace std;

int missingposint(int arr[],int n){

// finding first  pos int 
int small;
int pos;

for(int i=0;i<n;i++){
   if(arr[i]>0){
    small = arr[i];
    break;
   }
}

if(small>0){
// finding least pos int in arr
for(int i=0;i<n;i++){
    if(arr[i]>0 && small> arr[i]){
        small = arr[i];
    }
}

// finding least missing pos int from arr
while(true)
{
    int found = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == small + 1)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        small++;
    else
    {
        pos = small + 1;
        break;
    }
}
cout << pos ;
}
return 0;
}

int main(){
    int arr[100];
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    missingposint(arr,n);

    return 0;
}