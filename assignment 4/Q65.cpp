#include <iostream>

class Account {
public:
    virtual double calculateInterest() = 0; 
};

class SavingsAccount : public Account {
private:
    double balance;
    double interestRate;
public:
    SavingsAccount(double b, double r) : balance(b), interestRate(r) {}
    double calculateInterest() override {
        return balance * interestRate;
    }
};

class CurrentAccount : public Account {
private:
    double balance;
public:
    CurrentAccount(double b) : balance(b) {}
    double calculateInterest() override {
        return 0; 
    }
};

int main() {
    Account* accounts[2];
    accounts[0] = new SavingsAccount(1000, 0.05);
    accounts[1] = new CurrentAccount(2000);

    for (int i = 0; i < 2; i++) {
        std::cout << "Interest: " << accounts[i]->calculateInterest() << std::endl;
        delete accounts[i];
    }

    return 0;
}
