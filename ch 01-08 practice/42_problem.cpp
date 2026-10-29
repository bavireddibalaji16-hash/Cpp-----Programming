#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct address{
   string city,state;
   int pincode;
};

struct students : address {
    string name;
    int id,cgpa;
};

int main(){
  int N;
  cout << "Enter number of students: ";
  cin >> N;
vector <students> student(N);   // vector <DataType> variableName(size);

for (int i = 0; i < N; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";

        cout << "ID: ";
        cin >> student[i].id;

        cout << "Name: ";
        getline(cin >> ws, student[i].name);

        cout << "CGPA: ";
        cin >> student[i].cgpa;

        cout << "City: ";
        getline(cin >> ws, student[i].city);

        cout << "State: ";
        getline(cin >> ws, student[i].state);

        cout << "Pincode: ";
        cin >> student[i].pincode;
    }

    string city ;
    cout << "Enter target city: ";
    getline(cin >> ws,city);
    bool found = false;

    for(int i=0;i<N;i++){
        if(student[i].city == city){
            cout << student[i].name << endl;
            found = true;
        }
    }

    if(!found){
        cout << "no students belong to this city " << endl;
    }
}