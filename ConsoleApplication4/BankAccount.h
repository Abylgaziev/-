#pragma once
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

    
    BankAccount(const BankAccount& other) {
        accountNumber = other.accountNumber;
        balance = other.balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        }
        else {
            cout << "Недостаточный баланс." << endl;
        }
    }

    void displayInfo() {
        cout << "Номер счета : " << accountNumber << endl;
        cout << "Баланс: $" << balance << endl;
    }

    
    void transfer(BankAccount& other, double amount) {
        if (amount <= balance) {
            balance -= amount;
            other.balance += amount;
            cout << "Передача прошла успешно." << endl;
        }
        else {
            cout << "Недостаточный баланс." << endl;
        }
    }
};

