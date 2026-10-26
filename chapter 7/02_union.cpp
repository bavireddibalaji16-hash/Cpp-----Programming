#include<iostream>
#include<cstring>
using namespace std;

 typedef struct employee {
    char name[20];
    int age;
    int salary;
}emp;

typedef union Favourite{
    char fav_col[20];
    int fav_num;
}fav;

int main(){
    emp e1 ={"balaji",18,7200000};
    fav f1;
    strcpy(f1.fav_col,"Grey");
    cout << e1.name <<e1.age << e1.salary<< endl;
    cout << f1.fav_col<<endl;
    f1.fav_num = 17;
    cout << f1.fav_num;
      
    return 0;
} 

