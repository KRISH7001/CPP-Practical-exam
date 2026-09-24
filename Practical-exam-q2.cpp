#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    
    string accountNumber;
    string ownerName;
    double balance;

public:

    BankAccount(string accNum, string owner, double initialBalance = 0.0) {
        accountNumber = accNum;
        ownerName = owner;
        balance = (initialBalance >= 0) ? initialBalance : 0.0;
    }

    void credit(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount! Credit amount must be positive.\n";
            return;
        }
        balance += amount;
        cout << "Credited: $" << amount << " | New Balance: $" << balance << "\n";
    }

    void debit(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount! Debit amount must be positive.\n";
            return;
        }
        if (amount > balance) {
            cout << "Insufficient funds! Current balance: $" << balance << "\n";
            return;
        }
        balance -= amount;
        cout << "Debited: $" << amount << " | New Balance: $" << balance << "\n";
    }

    void displayBalance() const {
        cout << "\n----- Account Details -----\n";
        cout << "Account Number : " << accountNumber << "\n";
        cout << "Owner Name     : " << ownerName << "\n";
        cout << "Balance        : $" << balance << "\n";
        cout << "----------------------------\n";
    }
    double getBalance() const {
        return balance;
    }

    string getOwnerName() const {
        return ownerName;
    }
};

int main() {
    
    BankAccount account1("ACC10234", "John Doe", 1000.0);

    
    account1.displayBalance();

    account1.credit(500.0);
    account1.debit(300.0);
    account1.debit(5000.0);   
    account1.credit(-100.0);  

    account1.displayBalance();

   
    return 0;
}