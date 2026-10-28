
#include <iostream>
#include <string>
using namespace std;

// finding out the employee with highest net salary 

struct Employee {
    int id;
    string name;
    double basicPay, allowances, deductions;

    double netSalary() {
        return basicPay + allowances - deductions;
    }
};

int main() {
    Employee e[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter ID, name, basic pay, allowances, deductions:\n";
        cin >> e[i].id;
        cin.ignore();
        getline(cin, e[i].name);
        cin >> e[i].basicPay >> e[i].allowances >> e[i].deductions;
    }

    int maxIndex = 0;

    for (int i = 1; i < 5; i++) {
        if (e[i].netSalary() > e[maxIndex].netSalary())
            maxIndex = i;
    }

    cout << "\nHighest Earning Employee\n";
    cout << "ID: " << e[maxIndex].id << endl;
    cout << "Name: " << e[maxIndex].name << endl;
    cout << "Basic Pay: " << e[maxIndex].basicPay << endl;
    cout << "Allowances: " << e[maxIndex].allowances << endl;
    cout << "Deductions: " << e[maxIndex].deductions << endl;
    cout << "Net Salary: " << e[maxIndex].netSalary() << endl;

    return 0;
}
