#include<iostream>
#include<string>
#include<map>
using namespace std;

// 8. Mini E-Commerce Inventory

int main(){
    map<string,int>products;

    int choice;
    string name;
    int price;

    do{
    cout<< "1.Add Product" << endl;
    cout << "2.Update Price" << endl;
    cout << "3.Search Product" << endl;
    cout << "4.Display Product " << endl;
    cout << "5.exit " << endl;

    cout << "Enter the Choice :" ;
     cin >> choice;

        switch(choice){
            case 1 :
            cout << "Enter name and Price : ";
            cin >> name >> price ;
            products[name] = price;
            cout <<"\nProduct added or updated";
            break;

            case 2 :
           cout << "Enter name and new price: ";
           cin >> name >> price;

                if (products.find(name) != products.end()) {
                    products[name] = price;
                    cout << "Price updated\n";
                } else {
                    cout << "Product not found\n";
                }
                break;

            case 3 :
            cout << "Search product :" ;
            cin >> name ;

             if (products.find(name) != products.end()) {
                    cout << "Found: " << products[name] << endl;
                } else {
                    cout << "Product not found\n";
                }
                break;

             case 4 :
             cout << "Display Products :";
             for(auto p : products){
                cout << p.first << " " << p.second << endl;
             }
             break;

             case 5 :
             cout << "Exiting ....";
             break;

             default :
            cout << "Entered the wrong choice " << endl;
        }

    }while(choice!=5);

    return 0;
}