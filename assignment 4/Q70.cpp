#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment() = 0;
};

class CreditCardPayment : public Payment {
public:
    void processPayment() {
        cout << "Processing Credit Card Payment" << endl;
    }
};

class DebitCardPayment : public Payment {
public:
    void processPayment() {
        cout << "Processing Debit Card Payment" << endl;
    }
};

int main() {
    Payment* payment1 = new CreditCardPayment();
    Payment* payment2 = new DebitCardPayment();
    payment1->processPayment();
    payment2->processPayment();
    delete payment1;
    delete payment2;
    return 0;
}
