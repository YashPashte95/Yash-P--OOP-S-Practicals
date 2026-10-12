#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    Complex operator/(Complex c) {
        Complex temp;

        float denominator = c.real * c.real + c.imag * c.imag;

        if (denominator == 0) {
            cout << "Error: Division by zero!" << endl;
            temp.real = 0;
            temp.imag = 0;
        } else {
            temp.real = (real * c.real + imag * c.imag) / denominator;
            temp.imag = (imag * c.real - real * c.imag) / denominator;
        }

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
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    result = c1 / c2;

    cout << "Result of division: ";
    result.display();

    return 0;
}
