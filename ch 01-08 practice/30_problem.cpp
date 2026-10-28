#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int count(char str[]){

    int arr[100]={0};
    
    for(int i=0;str[i]!='\0';i++){
        int count=0;
      for(int j=0;str[j]!='\0';j++){
        if(arr[i]>0){
            continue;
        }
        if(str[i]==str[j]){
            count++;
            arr[j]++;
        }
      }

        cout << str[i] << " " << count << endl;
    }

    return 0;
}

int main(){

 char str[100];
 cin >> str;

 count(str);
 
}