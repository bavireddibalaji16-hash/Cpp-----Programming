#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;

    s.push(5);
    s.push(18);
    s.push(9);
    s.push(12);

    cout << "size : " << s.size() << endl;

    stack <int> s2;
    s2.swap(s);
    cout << s2.size() << " " << s.size() << endl;

    while(!s2.empty()){
        cout << s2.top() << " ";
        s2.pop();
    }

}