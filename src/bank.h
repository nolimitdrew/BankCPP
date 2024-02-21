#ifndef BANK_H
#define BANK_H

#include <string>
#include <vector>

class Customer {
private:
    std::string name;
    int accountNumber;
    double balance;

public:
    Customer(const std::string& name, int accountNumber, double balance);

    std::string getName() const;
    int getAccountNumber() const;
    double getBalance() const;

    void deposit(double amount);
    void withdraw(double amount);
};

class Bank {
private:
    std::vector<Customer> customers;

public:
    void addCustomer(const Customer& customer);
    void displayCustomers() const;
};

#endif // BANK_H