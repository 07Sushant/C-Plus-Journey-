// You are using GCC
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class BankATM {
private:
    int atmID;
    string location;
    float availableCash;

public:
    BankATM(int id, string loc, float cash) : atmID(id), location(loc), availableCash(cash) {}

    void withdrawCash(float amount) {
        if (amount <= availableCash) {
            availableCash -= amount;
            cout << fixed << setprecision(1);
            cout << "Withdrawal successful. Available cash: " << availableCash << endl;
        } else {
            cout << "Insufficient cash in the ATM." << endl;
        }
    }

    void depositCash(float amount) {
        availableCash += amount;
        cout << fixed << setprecision(1);
        cout << "Deposit successful. Available cash: " << availableCash << endl;
    }

    void displayAvailableCash() {
        cout << "Available cash in ATM: " <<std::fixed<<std::setprecision(1)<<availableCash << endl;
    }
};

int main() {
    int atmID;
    string location;
    float initialCash, withdrawAmount, depositAmount;
    cin >> atmID;
    cin.ignore();
    getline(cin, location);
    cin >> initialCash >> withdrawAmount >> depositAmount;
    BankATM atm(atmID, location, initialCash);
    atm.withdrawCash(withdrawAmount);
    atm.depositCash(depositAmount);
    atm.displayAvailableCash();
    return 0;
}


//Sushant
