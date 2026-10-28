#include<iostream>
using namespace std;

void rearrange(int arr[], int n)
{
    int pos[100], neg[100];
    int p = 0, ne = 0;

    // Separate positive and negative numbers
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
            pos[p++] = arr[i];
        else
            neg[ne++] = arr[i];
    }

    int i = 0, j = 0, k = 0;

    // Put positive and negative alternately
    while(i < p && j < ne)
    {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    // If positive elements are left
    while(i < p)
        arr[k++] = pos[i++];

    // If negative elements are left
    while(j < ne)
        arr[k++] = neg[j++];

    // Print array
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[100];
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    rearrange(arr, n);

    return 0;
}