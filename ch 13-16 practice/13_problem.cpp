#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main(){
   deque<string>dq;
   string op,request;
   int k;
   cin >> k;

   while(cin >> op){
    if(op =="URGENT"){
        cin >> request;
        dq.push_front(request);
    }
    else if(op =="NORMAL"){
        cin >> request;
        dq.push_back(request);
    }
    else if(op=="PROCESS_FRONT"){
        if(!dq.empty()){
            dq.pop_front();
        }
      }
   }

   if(dq.size()>k){
    dq.pop_front();
   }

   for(auto p : dq){
     cout << p << " ";
   }

}