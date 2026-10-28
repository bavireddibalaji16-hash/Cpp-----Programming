#include<iostream>
#include<string>
using namespace std;

class bankacc{
    private:
    int balance;
    public:
    bankacc(int a){
        balance= a;
        cout << " successfully stored " << endl;
    }

    void getdeposit(int b){
        balance=balance+b;
        cout << "successfully deposited " << endl;
    }

    void getwithdrawl(int c){
        if(c>balance){
            cout << "insufficient balance" << endl;
            return ;
        }
        else{
            balance = balance-c;
            cout << " successfully withdrawn " << endl;
        }
    }

        void current(){
            cout << balance << endl;
        }

};

int main(){
    bankacc a1(12000);
    a1.getdeposit(15000);
    a1.getwithdrawl(25000);
    a1.current();
    return 0;
}