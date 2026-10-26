#include <iostream>
using namespace std;

// arrange the values in a spiral order in a 2D array

int main()
{
    int n;
    cin >> n;

    int arr[10][10];

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;

    int value = 1;

    while(top <= bottom && left <= right)
    {
        // Top row
        for(int j = left; j <= right; j++)
        {
           cin >> arr[top][j];
            
        }
        top++;

        // Right column
        for(int i = top; i <= bottom; i++)
        {
            cin >> arr[i][right]; 
        }
        right--;

        // Bottom row
        if(top <= bottom)
        {
            for(int j = right; j >= left; j--)
            {
              cin >> arr[bottom][j] ;
            }
            bottom--;
        }

        // Left column
        if(left <= right)
        {
            for(int i = bottom; i >= top; i--)
            {
                cin >> arr[i][left] ;
            }
            left++;
        }
    }

    // Print matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}