#include<iostream>
using namespace std;

int longest(int arr[], int n)
{
     // finding long consecutive integers  in arr 

    int max = 0;

    for(int i = 0; i < n; i++)
    {
        int current = arr[i];
        int count = 1;

        while(true)
        {
            int found = 0;

            for(int j = 0; j < n; j++)
            {
                if(arr[j] == current + 1)
                {
                    found = 1;
                    break;
                }
            }

            if(found == 1)
            {
                current++;
                count++;
            }
            else
            {
                break;
            }
        }

        if(count > max)
            max = count;
    }

    return max;
}

int main()
{
    int arr[100];
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Length = " << longest(arr, n);

    return 0;
}