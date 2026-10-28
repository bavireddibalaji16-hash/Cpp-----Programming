#include <iostream>
using namespace std;

// finding max sum of sub matrix in a matrix

int main()
{
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int a[10][10];

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }

    int maxSum = a[0][0];

    int top = 0, bottom = 0;
    int left = 0, right = 0;

    // Try every possible top row
    for (int topRow = 0; topRow < rows; topRow++)
    {
        // Try every possible bottom row
        for (int bottomRow = topRow; bottomRow < rows; bottomRow++)
        {
            // Try every possible left column
            for (int leftCol = 0; leftCol < cols; leftCol++)
            {
                // Try every possible right column
                for (int rightCol = leftCol; rightCol < cols; rightCol++)
                {
                    int sum = 0;

                    // Calculate sum of this rectangle
                    for (int i = topRow; i <= bottomRow; i++)
                    {
                        for (int j = leftCol; j <= rightCol; j++)
                        {
                            sum += a[i][j];
                        }
                    }

                    // Update maximum
                    if (sum > maxSum)
                    {
                        maxSum = sum;

                        top = topRow;
                        bottom = bottomRow;
                        left = leftCol;
                        right = rightCol;
                    }
                }
            }
        }
    }

    cout << "\nMaximum sum = " << maxSum << endl;

    cout << "Boundaries:\n";
    cout << "Top row = " << top << endl;
    cout << "Bottom row = " << bottom << endl;
    cout << "Left column = " << left << endl;
    cout << "Right column = " << right << endl;

    cout << "\nMaximum-sum submatrix:\n";

    for (int i = top; i <= bottom; i++)
    {
        for (int j = left; j <= right; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}