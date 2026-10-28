#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){

    char str[7]="balaji";
    char str1[100];
    int visited[100]={0};
    int k=0;

    for(int i=0;i<6;i++){
        if(visited[str[i]]==1){
            continue;
        }
        for(int j=0;j<6;j++){
        if(str[i]==str[j]){
            visited[str[j]]=1;
        }
      }
       str1[k++]=str[i];
   }
     
        for(int i=0;i<k;i++){
           cout  << str1[i];
    }

    return 0;
}