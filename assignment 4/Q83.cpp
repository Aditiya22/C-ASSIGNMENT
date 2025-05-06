#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
public:
    virtual void displayAccountType() = 0;
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
};

class SavingsAccount : public BankAccount {
public:
    void displayAccountType() {
        cout << "Savings Account" << endl;
    }
    void deposit(double amount) {
        cout << "Deposited " << amount << " to Savings Account" << endl;
    }
    void withdraw(double amount) {
        cout << "Withdrawn " << amount << " from Savings Account" << endl;
    }
};

class CurrentAccount : public BankAccount {
public:
    void displayAccountType() {
        cout << "Current Account" << endl;
    }
    void deposit(double amount) {
        cout << "Deposited " << amount << " to Current Account" << endl;
    }
    void withdraw(double amount) {
        cout << "Withdrawn " << amount << " from Current Account" << endl;
    }
};

int main() {
    vector<BankAccount*> accounts;
    accounts.push_back(new SavingsAccount());
    accounts.push_back(new CurrentAccount());

    int choice;
    double amount;
    while (true) {
        cout << "1. Display Account Type\n2. Deposit\n3. Withdraw\n4. Exit\n";
        cin >> choice;
        if (choice == 4) break;

        for (auto account : accounts) {
            account->displayAccountType();
            if (choice == 2) {
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account->deposit(amount);
            } else if (choice == 3) {
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account->withdraw(amount);
            }
        }
    }

    for (auto account : accounts) {
        delete account;
    }
    return 0;
}
