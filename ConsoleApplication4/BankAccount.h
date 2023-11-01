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
            cout << "������������� ������." << endl;
        }
    }

    void displayInfo() {
        cout << "����� ����� : " << accountNumber << endl;
        cout << "������: $" << balance << endl;
    }

    
    void transfer(BankAccount& other, double amount) {
        if (amount <= balance) {
            balance -= amount;
            other.balance += amount;
            cout << "�������� ������ �������." << endl;
        }
        else {
            cout << "������������� ������." << endl;
        }
    }
};

