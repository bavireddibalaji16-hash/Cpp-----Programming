#include<iostream>
#include<string>
using namespace std;

// creating a Library system 

class library{
    public :
    string book;
    library(string book){
    this->book = book;
   }
};

class infor : public library{
    public :
    string author;
    bool available;
    infor(string book,string author):library(book){
        this-> author = author;
        available = true;
    }
    void issuebook(){
      if(available){
        cout << "issued successfully \n";
        available = false;
      }
      else{
        cout << " already issued\n";
      }
    }
    void returnbook(){
        if(available!=0){
            cout<<"book is already present";
        }
        else{
            cout<<"book is successfully restored";
        }
    }
};

int main(){
    infor a1("power of now ","Eckhart Tolle");
    infor a2("atomic habits","james clear");
    a1.issuebook();
    a1.issuebook();
    a1.returnbook();
    return 0;
}