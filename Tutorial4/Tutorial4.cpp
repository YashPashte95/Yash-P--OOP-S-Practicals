#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    Complex add(Complex c1, Complex c2) {
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.imag = c1.imag + c2.imag;
        return temp;
    }

    Complex subtract(Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
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

int main() {
    Complex c1, c2, c3, sum, result;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    cout << "Enter third complex number:\n";
    c3.input();

    sum = sum.add(c1, c2);
    result = sum.subtract(c3);

    cout << "Sum of first two complex numbers: ";
    sum.display();

    cout << "Result after subtraction: ";
    result.display();

    return 0;
}
