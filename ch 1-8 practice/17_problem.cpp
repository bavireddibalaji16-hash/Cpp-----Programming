#include <iostream>
using namespace std;

/* void removeDuplicate(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                for(int k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int a[100], n;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    removeDuplicate(a, n);

    return 0;
} */



int main(){
    
    // removind duplicate numbers in an arr

int arr[7]= {1,2,3,2,4,3,5};
int brr[100];
int k=0;
int visited[100] = {0};
int n=0;
for(int i=0;i<7;i++){
  for(int j=0;j<7;j++){
  if(visited[arr[i]]>0){
  continue;
  }
    if(arr[i]==arr[j] ){
      visited[arr[i]]++;
      brr[k++]=arr[i];
      n++;
    }
}
}

for(int i=0;i<n;i++){
    cout << brr[i] <<" ";
}
return 0;
}
