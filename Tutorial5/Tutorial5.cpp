#include <iostream>
using namespace std;

class Calculator {
public:
    // Addition of two numbers
    int calculate(int a, int b) {
        return a + b;
    }

    // Subtraction of two numbers
    int calculate(int a, int b, int c) {
        return a - b - c;
    }
};

int main() {
    Calculator obj;

    cout << "Addition: " << obj.calculate(10, 20) << endl;
    cout << "Subtraction: " << obj.calculate(30, 10, 5) << endl;

    return 0;
}
