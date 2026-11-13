#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream file("student.txt");

    file << "BAlaji45\n";
    file << "95";

    file.close();

    ifstream readfile("student.txt");
    int marks;
    string name;
    readfile>> name >> marks;
    cout << name << endl << marks << endl;

    file.close();
}