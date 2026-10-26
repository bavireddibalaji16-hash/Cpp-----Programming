#include<iostream>
#include<map>
using namespace std;

 // 2. Count Frequencies of Elements
 
int main(){
    map<int,int>m;

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
       m[x]++;
    }

    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }
}