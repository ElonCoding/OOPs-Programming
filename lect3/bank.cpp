#include <iostream>
#include <string>

class BankAccount {
  private:
    std::string accountHolder;
    std::string accountNumber;
    double balance;

  public:
    // Constructor
    BankAccount(std::string holder, std::string number, double initialBalance)
        : accountHolder(holder), accountNumber(number), balance(initialBalance) {}

    // Method to display account information
    // Account Holder: <holder>
    // Account Number: <number>
    // Balance: $<balance>
    void displayInfo() {
        std::cout << "Account Holder: " << accountHolder << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << std::endl;
        } else {
            std::cout << "Deposit amount must be positive!" << std::endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew: $" << amount << std::endl;
        } else if (amount > balance) {
            std::cout << "Insufficient funds!" << std::endl;
        } else {
            std::cout << "Withdrawal amount must be positive!" << std::endl;
        }
    }
};
int main() {
    BankAccount account("John Doe", "123456789", 1000.0);
    account.displayInfo();
    return 0;
}