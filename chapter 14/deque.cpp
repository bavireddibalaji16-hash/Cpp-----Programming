#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>vec;

    vec.push_back(18);
    vec.push_back(45);
    vec.push_back(7);
    vec.push_back(93);

    vec.emplace_back(8);   // THis is similar to push_back vector
    vec.emplace_back(1);  
    vec.pop_back();        // Pop back will remove the last elemnet

    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;

    for(int val : vec){
        cout << val << " " ;
    }

    cout << "\nFront : " << vec.front() << endl;
    cout << "Back : "  << vec.back() << endl;

    cout << vec.size() <<endl;
    return 0;
}


 // NOTE : Deque cannot use vec.capacity()