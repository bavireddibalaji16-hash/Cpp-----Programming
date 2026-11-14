#include<iostream>
#include<String>
using namespace std;

// The return does not end the entire recursion tree. It ends only the current function call. That's why all subsequences eventually get printed.
void subsequence(string s,string ans,int i){
    if(s.length()==i){
        cout << ans << endl;
        return;
    }

    subsequence(s,ans+s[i],i+1);
    subsequence(s,ans,i+1);
}

int main(){
    string s ;
    cin >> s;

    subsequence(s,"",0);
}

