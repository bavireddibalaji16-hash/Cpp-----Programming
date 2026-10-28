#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;

    q.push(5);
    q.push(18);
    q.push(9);
    q.push(12);

    cout << "size : " << q.size() << endl;

    queue<int>q2;
    q2.swap(q);
    cout << q.size() << " " << q2.size() << endl;
    
    while(!q2.empty()){
        cout << q2.front() << " ";
        q2.pop();
    }

    
}