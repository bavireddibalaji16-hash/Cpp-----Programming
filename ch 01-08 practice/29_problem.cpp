#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int reverse(char str[]){

    for(int i=0;i<strlen(str)/2;i++){
        char temp = str[strlen(str)-i-1];
        str[strlen(str)-i-1]=str[i];
        str[i]= temp;
    }

   
    cout << str;

return 0;
}

int main(){
    char str[200];
    cin >> str;
    
    reverse(str);

}