#include<iostream>
#include<string>
using namespace std;

struct bankaccount{
    int accountnum;
    string holdername;
    int balance;

     void deposit(double amount){
       balance += (amount);
    }

   bool withdraw( double amount){
    
       if(balance-amount>1000){
        return balance > 1000;
       }
       else{
        balance-=amount;
        return balance > 1000;
       }
    }
   
};


int main(){
    bankaccount ba1;

while(1){
    int choice;
    int n,m;
    cout << "Enter the choice :";
    cin >> choice;

    cout << "[1] Deposit" << endl <<"[2] Withdraw" << endl << "[3] Check Details" << endl << "[4] Exit" << endl;

    switch(choice){
        case 1 :
        cout << "Deposit\n";
        cin >> n;
        ba1.deposit(n);
        break;

        case 2 :
        cout << "withdrawl\n";
        cin >> m;
        if(ba1.withdraw(n)){
            cout << ba1.balance << endl;
        }
        else{
            cout << "insufficient balance";
        }
        break;

        case 3:
        cout << ba1.accountnum << endl;
        cout << ba1.holdername << endl;
        cout << ba1.balance << endl;
        break;

        case 4 :
        cout << "exit";
        return 0;
    }
}

return 0;
}