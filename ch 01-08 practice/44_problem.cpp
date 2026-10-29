#include <iostream>
#include <string>
using namespace std;

struct Item {
    int itemCode;
    string name;
    double unitPrice;
    int quantity;
};

int main() {
    int N;
    cout << "Enter number of items: ";
    cin >> N;

    Item* ptr = new Item[N];  // u qcannit give existed array as  item*ptr = new item i[n] and pointer and data type should have same data type 
                              // by using item[n] it creates an array of n object items

    // Input item details
    for (int i = 0; i < N; i++) {
        cout << "\nEnter details of item " << i + 1 << ":\n";

        cout << "Item code: ";
        cin >> (ptr + i)->itemCode; // this is another way of representing *(ptr+i).itemcode

        cout << "Item name: ";
        getline(cin >> ws, (ptr + i)->name);

        cout << "Unit price: ";
        cin >> (ptr + i)->unitPrice;

        cout << "Quantity: ";
        cin >> (ptr + i)->quantity;
    }

    // Display invoice and calculate total bill
    double totalBill = 0;

    cout << "\n--- ITEMIZED INVOICE ---\n";
    cout << "Code\tName\t\tPrice\tQty\tAmount\n";

    for (int i = 0; i < N; i++) {
        double amount = (ptr + i)->unitPrice * (ptr + i)->quantity;

        cout << (ptr + i)->itemCode << "\t"
             << (ptr + i)->name << "\t\t"
             << (ptr + i)->unitPrice << "\t"
             << (ptr + i)->quantity << "\t"
             << amount << "\n";

        totalBill += amount;
    }

    cout << "\nTotal bill = " << totalBill << "\n";

    // Free dynamically allocated memory
    delete[] ptr;

    return 0;
}