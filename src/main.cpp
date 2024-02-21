#include "bank.h"

int main() {
    Bank bank;

    // Create and add customers
    Customer customer1("John Doe", 1001, 5000.0);
    Customer customer2("Jane Smith", 1002, 10000.0);
    Customer customer3("Alice Johnson", 1003, 2000.0);

    bank.addCustomer(customer1);
    bank.addCustomer(customer2);
    bank.addCustomer(customer3);

    // Display all customers
    bank.displayCustomers();

    // Perform transactions
    customer1.withdraw(2000.0);
    customer2.deposit(500.0);
    customer3.withdraw(5000.0);

    // Display updated customer details
    bank.displayCustomers();

    return 0;
}