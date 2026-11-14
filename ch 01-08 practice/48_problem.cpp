#include<iostream>
#include<cstring>
using namespace std;

 bool palidrome(char name[],int start,int end){
   if(name[start] == name[end]){

    if(start<end){
      return palidrome(name,start+1,end-1);
     }
     else{
      return true;
     }

  }
   else{
    return false;
   }

}



int main(){
  char name[100];
  cin >> name;
  int start = 0;
  int end = strlen(name)-1;

  if(palidrome(name,start,end)){
    cout << "it is a palidrome string";
  }
  else{
    cout <<"it is not a palidrome string";
  }

}

