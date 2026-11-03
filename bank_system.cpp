#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accNo;
    string holderName;
    double balance;

public:
    BankAccount(int acc, string name, double initialBal) {
        accNo = acc;
        holderName = name;
        balance = initialBal;
    }

    void deposit(double amt) {
        if (amt > 0) {
            balance += amt;
            cout << "Deposited: " << amt << " | New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amt) {
        if (amt > balance) {
            cout << "Insufficient funds for withdrawal of: " << amt << endl;
        } else if (amt <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            balance -= amt;
            cout << "Withdrawn: " << amt << " | Remaining Balance: " << balance << endl;
        }
    }

    void displayInfo() {
        cout << "\nAccount Number: " << accNo << endl;
        cout << "Account Holder: " << holderName << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b1(101, "Rahul", 5000);

    b1.displayInfo();
    b1.deposit(1200);
    b1.withdraw(2500);
    b1.withdraw(7000);
    b1.displayInfo();

    return 0;
}

