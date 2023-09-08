#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            return true;
        } else {
            return false;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    string acc1, acc2;
    double initialBalance1, initialBalance2, depositAmount, withdrawAmount;

    cin >> acc1 >> initialBalance1 >> acc2 >> initialBalance2 >> depositAmount >> withdrawAmount;

    BankAccount account1(acc1, initialBalance1);
    BankAccount account2(acc2, initialBalance2);

    if (!account2.withdraw(withdrawAmount)) {
        cout << "Insufficient balance in account " << acc2 << endl;
    }

    account1.deposit(depositAmount);

    cout << "Account " << acc1 << " has a balance of: " << account1.getBalance() << endl;
    cout << "Account " << acc2 << " has a balance of: " << account2.getBalance() << endl;

    return 0;
}



//Sushant