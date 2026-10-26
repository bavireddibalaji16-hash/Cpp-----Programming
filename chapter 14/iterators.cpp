#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>vec = {1,2,3,4,5,6,7};
    cout << *(vec.begin()) << " " ;
    cout << *(vec.end()) << endl;

    vector<int>:: iterator it;
    for(it = vec.begin();it!=vec.end();it++){
        cout << *(it) << " " ;
    }

    cout << endl;

    for (vector<int>::reverse_iterator rif = vec.rbegin();rif != vec.rend(); rif++) {
        cout << *rif << " ";
    }

    cout << endl;

    for(auto itt = vec.begin();itt!= vec.end();itt++){
        cout << *(itt) << " " ;
    }

    cout << endl;

    for(auto iff = vec.rbegin();iff !=vec.rend();iff++){
        cout << *(iff) << " ";
    }

}

// NOTE : Iterators cannot be added in front as it was costly for iterator