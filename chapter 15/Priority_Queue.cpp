#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int>pq;

    pq.push(5);
    pq.push(18);
    pq.push(9);
    pq.push(12);

    cout << "size : " << pq.size() << endl;

    priority_queue<int>pq2;
    pq2.swap(pq);
    cout << pq.size() << " " << pq2.size() << endl;
    
    while(!pq2.empty()){
        cout << pq2.top() << " ";
        pq2.pop();
    }
    
}



// U cannot swap priority queue into queue as they have diff behaviour swap was not allowed to do it 
// But we can do it in other ways 



/* 
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    pq.push(5);
    pq.push(18);
    pq.push(9);
    pq.push(12);

    queue<int> pq2;

    while (!pq.empty()) {
        pq2.push(pq.top());
        pq.pop();
    }

    while (!pq2.empty()) {
        cout << pq2.front() << " ";
        pq2.pop();
    }

} 
   */


