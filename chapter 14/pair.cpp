#include<iostream>
#include<vector>
using namespace std;

int main(){
    pair<int,int> p={3,5};
    cout << p.first << " " << p.second ;

    pair<int , pair<string,int> > pa ={4,{"balaji",7}};
    cout << pa.first <<" " << pa.second.first << " " << pa.second.second  << endl;

    vector < pair <int,int> > vec ={{1,2},{3,4},{5,6}};
    for( pair <int,int> p : vec){
        cout << p.first << " " << p.second << endl;
    }       
    vec.push_back({7,8});    // u created pair and given 
    vec.emplace_back(7,8);   // it will create it by itself by giving values 
    for( auto p : vec){                                  
        cout << p.first << " " << p.second << endl;
    }

}