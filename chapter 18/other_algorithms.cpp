#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<int>vec={5,9,3,10,2};
    reverse(vec.begin(),vec.begin()+5);  // it will print in reverse order 
    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;

    cout << max(4,10) << endl;
    cout << min(5,17) << endl;

    string s="abcd";
    prev_permutation(s.begin(),s.end());
    cout << s << endl;
    next_permutation(s.begin(),s.end());
    cout << s << endl;

    cout << *(max_element(vec.begin(),vec.end())) << endl;
    cout << *(min_element(vec.begin(),vec.end())) << endl;

    cout << binary_search(vec.begin(),vec.end(),5) << endl; // prints 1 if number is present in vec 
    cout << binary_search(vec.begin(),vec.end(),14) << endl; // prints 0 if number is absent in vec 

    int n1 = 17;
    long int n2 = 173;
    long long n3 = 127892;
    
    cout << _builtin_popcount(n1) << endl; // counts no of 1's in binary representation 
    cout << _builtin_popcountl(n2) << endl;
    cout << _builtin_popcountll(n3) << endl;

}