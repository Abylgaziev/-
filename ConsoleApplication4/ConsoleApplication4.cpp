#include <iostream>
#include <string>
#include "BankAccount.h"


int main() {
    setlocale(LC_ALL, "Russian");
    BankAccount account1("123456789", 1000.0);
    BankAccount account2("987654321", 500.0);

    account1.deposit(200.0);
    account1.withdraw(150.0);
    account1.displayInfo();

    account2.withdraw(600.0);
    account2.withdraw(200.0);
    account2.displayInfo();

    account1.transfer(account2, 300.0);
    account1.displayInfo();
    account2.displayInfo();

    return 0;
}
