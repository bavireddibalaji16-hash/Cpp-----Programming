#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>vec;

    vec.push_back(18);
    vec.push_back(45);
    vec.push_back(7);
    vec.push_front(93);

    vec.emplace_back(8);   // THis is similar to push_back vector
    vec.emplace_front(1);  // element is added from front side 
    vec.pop_back();        // Pop back will remove the last elemnet

    for(int val : vec){
        cout << val << " " ;
    }

    cout << "\nFront : " << vec.front() << endl;
    cout << "Back : "  << vec.back() << endl;

    cout << vec.size() <<endl;
    
    return 0;
}

// NOTE : List cannot access vec.capacity() and vec[]