#include <iostream>
using namespace std;

class Account {
public:
    virtual void calculateReturns() {
        cout << "Calculating account returns..." << endl;
    }
};

class Savings : public Account {
    float amount, rate;

public:
    Savings(float a, float r) {
        amount = a;
        rate = r;
    }

    void calculateReturns() override {
        cout << "Savings Account Returns: "
             << amount * rate / 100 << endl;
    }
};

class FixedDeposit : public Account {
    float amount, rate;
    int years;

public:
    FixedDeposit(float a, float r, int y) {
        amount = a;
        rate = r;
        years = y;
    }

    void calculateReturns() override {
        cout << "Fixed Deposit Returns: "
             << amount * rate * years / 100 << endl;
    }
};

int main() {
    Account *acc;

    Savings s(10000, 5);
    FixedDeposit f(20000, 7, 3);

    acc = &s;
    acc->calculateReturns();

    acc = &f;
    acc->calculateReturns();

    return 0;
}
