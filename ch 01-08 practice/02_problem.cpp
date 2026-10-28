#include <iostream>
using namespace std;

// creating a bell triangle

int main() {

    int n;
    cin >> n;

    int arr[100][100];
    

    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++) {

            if (j == 0 && (i==0 ||i==1)) {
                arr[i][j] = 1;
            }
            else {
                if(i,j>0)
                {
                    arr[i][j] = arr[i-1][j-1] + arr[i][j-1];
              }
            arr[i+1][0]=arr[i][i];
        }
    }
}

    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}