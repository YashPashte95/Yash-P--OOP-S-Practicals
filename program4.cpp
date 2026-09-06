#include <iostream>
using namespace std;


class Complex
{
    int real1, real2;
    int imag1, imag2;


public:
    void getdata(int r1, int i1, int r2, int i2);


    void putdata()
    {
        cout << "Complex number1 = " << real1 << " + " << imag1 << "i" << endl;
        cout << "Complex number2 = " << real2 << " + " << imag2 << "i" << endl;


        cout << "Complex Number Subtraction = "
             << real1 - real2 << " + "
             << imag1 - imag2 << "i" << endl;
    }
};


void Complex::getdata(int r1, int i1, int r2, int i2)
{
    real1 = r1;
    imag1 = i1;
    real2 = r2;
    imag2 = i2;
}


int main()
{
    Complex c;
    int p, q, r, s;


    cout << "Enter real part1: ";
    cin >> p;


    cout << "Enter imaginary part1: ";
    cin >> q;


    cout << "Enter real part2: ";
    cin >> r;


    cout << "Enter imaginary part2: ";
    cin >> s;


    c.getdata(p, q, r, s);
    c.putdata();


    return 0;
}
