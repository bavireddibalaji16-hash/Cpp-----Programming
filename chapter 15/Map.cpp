#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string,int>m;

    // it prints the key in ascending order of alphabets in order of given keys

    m["watch"] = 50;
    m["laptop"] = 225;
    m["ear buds"] = 50;
    m["tv"] = 500;
    m["tablet"] = 150;

    m.insert({"camera",100});
    m.emplace("camera",125); // it doesnt take any value from here as key was already present 
    m["camera"] = 115;       // here it will update the key to updated value 

    m.erase("tv");    

    for(auto p: m){
        cout << p.first << " " << p.second << endl;
    }

    cout << "count = " << m.count("laptop") << endl;  // it will print how mnay times a key is present 
    cout << "size : " << m.size() << endl;

    if(m.find("laptop") != m.end()){
        cout << "found " << endl;
    }
    else{
        cout << "not found" << endl;
    }

}