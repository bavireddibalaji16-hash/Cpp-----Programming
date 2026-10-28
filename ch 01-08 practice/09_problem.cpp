#include<iostream>
using namespace std;

// dividing the given amount into diff notes  

int division(int money){

    int arr[5] = {500,200,100,50,20};
    int notes[5];

    for(int i=0;i<5;i++){

         notes[i] = money /arr[i];

        money = money - (notes[i]*arr[i]);
    }

    for(int i=0;i<5;i++){

        cout <<"no of notes of " << arr[i] << " is " <<  notes[i] << endl;
    }
        return 0;
    }
    

int main(){
    int money;
    cin >> money ;
    cout << endl;

    if((money%20)!=0){
        cout << "cannot be disposable" << endl;
    }
    else{
    division(money);
    }

return 0;

}