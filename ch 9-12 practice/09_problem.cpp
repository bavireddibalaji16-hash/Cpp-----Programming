
#include <iostream>
#include <string>
using namespace std;

// Design a Mini E-Commerce System

class Product {
protected:
    string name;
    double price;
    int id;

public:
    Product(string name, int id, double price) {
        this->name = name;
        this->price = price;
        this->id = id;
    }

    double getPrice() {
        return price;
    }

    void display() {
        cout << "Product ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

class Electronics : public Product {
private:
    int warranty;

public:
    Electronics(int id, string name, double price, int warranty)
        : Product(name, id, price) {
        this->warranty = warranty;
    }

    void display() {
        Product::display();
        cout << "Warranty: " << warranty << " years" << endl;
    }
};

class Clothing : public Product {
private:
    string size;

public:
    Clothing(int id, string name, double price, string size)
        : Product(name, id, price) {
        this->size = size;
    }

    void display() {
        Product::display();
        cout << "Size: " << size << endl;
    }
};

class Customer {
private:
    string name;
    double total;

public:
    Customer(string name) {
        this->name = name;
        total = 0;
    }

    void addProduct(double price) {
        total += price;
    }

    void displayBill() {
        cout << "\nCustomer: " << name << endl;
        cout << "Total bill: Rs. " << total << endl;
    }
};

int main() {
    Electronics laptop(101, "Laptop", 55000, 2);
    Clothing shirt(102, "Shirt", 799, "M");

    cout << "--- Product Details ---\n\n";

    laptop.display();
    cout << endl;

    shirt.display();

    Customer c1("Balaji");

    c1.addProduct(laptop.getPrice());
    c1.addProduct(shirt.getPrice());

    c1.displayBill();

    return 0;
}
