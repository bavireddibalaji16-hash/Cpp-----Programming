
#include <iostream>
using namespace std;

class Payment {
public:
 virtual void pay() = 0;
};

class UPI : public Payment {
public:
    void pay() {
        cout << "Payment using UPI\n";
    }
};

class Card : public Payment {
public:
    void pay() {
        cout << "Payment using Card\n";
    }
};

int main() {
    UPI u;
    Card c;
    Payment p;

    u.pay();
    c.pay();
    p.pay(); // it will show u error

    return 0;
}
