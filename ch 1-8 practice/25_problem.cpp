#include<iostream>
using namespace std;
int floyd(int n){
      int num=1;
      cout << "fylod's triangle " << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
          cout << num <<" ";
          num++;
        }
        cout << endl;
    }
}

int main(){

    int n;
    cin >> n;
    floyd(n);
    return 0;
}