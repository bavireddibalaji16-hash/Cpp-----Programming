#include<iostream>
#include<queue>
#include<stack>
using namespace std;

 // 6. Reverse the First K Elements of a Queue

int main(){
    stack<int>q1;
    queue<int>q2;

    q1.push(6);
    q1.push(5);
    q1.push(4);
    q1.push(3);
    q1.push(2);
    q1.push(1);

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
       q2.push(q1.top());
        q1.pop();
    }

    for(int i=0;i<n;i++){
        q1.push(q2.front());
        q2.pop();                                        
    }

    while(!q1.empty()){
        cout << q1.top();
        q1.pop();
    }

}