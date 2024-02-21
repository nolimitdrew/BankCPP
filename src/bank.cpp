#include "bank.h"
#include <iostream>

Customer::Customer(const std::string& name, int accountNumber, double balance)
    : name(name), accountNumber(accountNumber), balance(balance) {}

std::string Customer::getName() const {
    return name;
}

int Customer::getAccountNumber() const {
    return accountNumber;
}

double Customer::getBalance() const {
    return balance;
}

void Customer::deposit(double amount) {
    balance += amount;
}

void Customer::withdraw(double amount) {
    if (amount <= balance)
        balance -= amount;
    else
        std::cout << "Insufficient balance." << std::endl;
}

void Bank::addCustomer(const Customer& customer) {
    customers.push_back(customer);
}

void Bank::displayCustomers() const {
    std::cout << "Customers:" << std::endl;
    for (const Customer& customer : customers) {
        std::cout << "Name: " << customer.getName() << std::endl;
        std::cout << "Account Number: " << customer.getAccountNumber() << std::endl;
        std::cout << "Balance: " << customer.getBalance() << std::endl;
        std::cout << std::endl;
    }
}