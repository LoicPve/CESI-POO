#include <iostream>

class BankAccount {
private:
  double balance;

public:
  BankAccount(const double balance) : balance(balance) {}

  double getBalance() const {
    return balance;
  }

  bool deposit(const double amount){
    balance += amount;
    return true;
  }
  
  bool withdraw(const double amount){
    if (amount <= balance){
        balance -= amount;
        return true;
    }
    return false;
  }

};



int main() {
  BankAccount* account1 = new BankAccount(42.0);
  BankAccount* account2 = new BankAccount(500.0);

  std::cout << account1->getBalance() << std::endl;
  std::cout << account2->getBalance() << std::endl;
  
  account1->deposit(67);
  account2->withdraw(69);
  
  std::cout << account1->getBalance() << std::endl;
  std::cout << account2->getBalance() << std::endl; 

  delete account1;
  delete account2;

  return 0;
}