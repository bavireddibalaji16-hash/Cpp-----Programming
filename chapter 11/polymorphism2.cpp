#include <iostream>
using namespace std;

// Run time polymorphism

class Animal {
public:
    void sound() {
        cout << "Animal sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks\n";
    }
};

int main() {
    Animal a;
    Dog d;

    a.sound();
    d.Animal::sound();
}