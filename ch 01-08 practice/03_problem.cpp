#include<iostream>
using namespace std ;

// finding max freq of digit in a number 

int main(){
    int n;
    cin >> n;
    int freq[100];
    int digit ;
    

    while(n>0){
    digit= n%10;
    freq[digit]++;
    n=n/10;
    }

    int maxfreq=0;

    for(int i=0;i<10;i++){
        if(freq[i]>maxfreq){
            maxfreq = freq[i];
        }
    }

    for(int i=0;i<10;i++){
        if(freq[i]==maxfreq){
            cout << i << " ";
        }
    }
    
return 0;
}