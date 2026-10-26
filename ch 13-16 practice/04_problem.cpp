#include<iostream>
#include<set>
using namespace std;

// 4. Find Common Elements in Two Arrays

int main(){
    set <int>s1;
    set <int>s2;
    set <int>s3;

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        s1.insert(x);
    }

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        s2.insert(x);
    }

    for(auto it = s1.begin();it!=s1.end();it++){
        for(auto itt = s2.begin();itt!=s2.end();itt++){
            if(*it == *itt){
                s3.insert(*it);
            }
        }
    }

    for(auto it = s3.begin();it !=s3.end();it++){
        cout << *it << " " ;
    }

}