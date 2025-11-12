#include <iostream>
using namespace std;

class BankAccount{
private:
    const string accountNumber;
    int balance = 0;
    static int totalAccounts;

public:
    explicit BankAccount(string accNum, int bal = 0) : accountNumber(accNum), balance (bal){
        totalAccounts++;
    }

    void deposit(int depo){
        balance += depo;
    }

    void withdraw(int wd){
        if(wd > balance){
            cout<<"Not enough balance to withdraw " << wd << "\n";
            return;
        }
        balance -= wd;
    }

    void getBalance() {
        cout<<"Your total balance in account number " << accountNumber <<  " is: "<<balance<< "\n";
    }

    void getAccountNumber() const {
        cout<<"\nYour account number is: " << accountNumber << "\n";
    }

    static void getTotalAccounts() {
        cout<<"\nThere are " << totalAccounts << " total accounts in the bank\n";
    }
};

int BankAccount::totalAccounts = 0;

int main(){
    BankAccount account1("12345678", 1000);
    account1.deposit(1000);
    account1.withdraw(100);
    account1.getAccountNumber();
    account1.getBalance();

    BankAccount account2("0987654321", 0);
    account2.deposit(10);
    account2.withdraw(100);
    account2.getAccountNumber();
    account2.getBalance();

    BankAccount account3("124578", 0);
    account3.deposit(10000);
    account3.withdraw(3000);
    account3.getAccountNumber();
    account3.getBalance();

    BankAccount::getTotalAccounts();


    return 0;
}