
#include <iostream>
#include <string>
using namespace std;

struct Book {
    string isbn;
    string title;
    string author;
    double price;
};

int main() {
    int N;

    cout << "Enter number of books: ";
    cin >> N;

    Book books[100];

    for (int i = 0; i < N; i++) {
        cout << "\nEnter details of book " << i + 1 << ":\n";

        cout << "ISBN: ";
        cin >> books[i].isbn;

        cout << "Title: ";
        getline(cin >> ws, books[i].title);

        cout << "Author: ";
        getline(cin >> ws, books[i].author);

        cout << "Price: ";
        cin >> books[i].price;
    }

    // Bubble Sort: ascending order of price
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (books[j].price > books[j + 1].price) {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }

    // Display sorted catalog
    cout << "\nSorted Book Catalog:\n";

for (int i = 0; i < N; i++) {
    cout << "ISBN: " << books[i].isbn
         << ", Title: " << books[i].title
         << ", Author: " << books[i].author
         << ", Price: " << books[i].price << endl;
}

return 0;
}