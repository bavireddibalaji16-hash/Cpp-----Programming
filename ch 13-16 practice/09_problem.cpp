#include<iostream>
#include<map>
#include<queue>
using namespace std;

 // 10. Top K Frequent Elements

int main(){
    map<int,int> m;
    priority_queue<pair<int,int>>pq1;

    int k,n;
    cin >> k >> n;

    int p;
    
    if(k<1 || k>n){
        cout << "Invalid k";
        return 0;
    }

    for(int a=0;a<n;a++){
        cin >>p;
         m[p]++;
    }

    for(auto a : m){
        pq1.push({a.second,a.first});
    }

    for(int i=0;i<k;i++){
        cout << pq1.top().second<< " ";
        pq1.pop();
    }

    return 0;
}

