#include<iostream>
#include<string>
#include<map>
using namespace std;

// A store maintains products with unique IDs and stock quantities.

int main(){
   map<int,int>stock;
   string operation;
   int id,quantity;

   while(cin >> operation){
      if(operation =="ADD"){
        cin >> id >> quantity;
        stock[id] +=quantity;
      }
      else if(operation =="SELL"){
        cin >> id >> quantity;
        if(stock[id]>=quantity || stock.find(id)!=stock.end()){
            stock[id] -= quantity;
        }
      }
      else if(operation =="ACTIVE"){
         for(auto item : stock){
            cout << item.first << " " << item.second << endl;
         }
      }
    else{
        cout <<"SALE rejected" << endl;
    }
   }

    return 0;
}