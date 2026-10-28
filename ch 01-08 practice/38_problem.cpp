#include<iostream>
#include<string>
using namespace std;

// add and multiplication fo complex numbers 

struct Complex{
    double real;
    double img;
    
    Complex(){
        real = 0.0;
        img = 0.0;
    }

    Complex(double r, double i){
        real = r;
        img = i;
    }

    Complex add(const Complex& c){
       return complex(real + c.real,img + c.img);
    }

     Complex multiply(const Complex& c) {
        return Complex(real * c.real - imag * c.imag,
                       real * c.imag + imag * c.real);
    }

    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }

};

int main(){

    Complex c1(3.5,12);
    Complex c2(4.2,1.2);

    Complex sum = c1.add(c2);
    Complex mul = c1.multiply(c2);

    cout << "First: ";
    c1.display();

    cout << "Second: ";
    c2.display();

    cout << "Sum: ";
    sum.display();

    cout << "Product: ";
    product.display();

    return 0;

}
