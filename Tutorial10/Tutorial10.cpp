#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int a, b;

    cout << "Enter numerator: ";
    cin >> a;

    cout << "Enter denominator: ";
    cin >> b;

    try {
        if (b == 0) {
            throw runtime_error("Division by zero is not allowed!");
        }

        if (b < 0) {
            throw invalid_argument("Negative denominator entered!");
        }

        cout << "Result = " << (float)a / b << endl;
    }
    catch (const runtime_error& e) {
        cout << "Runtime Error: " << e.what() << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Invalid Argument: " << e.what() << endl;
    }
    catch (...) {
        cout << "Unknown exception occurred!" << endl;
    }

    return 0;
}
