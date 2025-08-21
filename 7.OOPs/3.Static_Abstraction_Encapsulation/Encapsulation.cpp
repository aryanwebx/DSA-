#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolder; // hidden data
    double balance;       // hidden data

public:
    // Constructor
    BankAccount(string name, double initialBalance)
    {
        accountHolder = name;
        balance = initialBalance;
    }

    // Getter
    double getBalance()
    {
        return balance;
    }

    // Setter with validation
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit successful!\n";
        }
        else
        {
            cout << "Invalid deposit amount!\n";
        }
    }
};

int main()
{
    BankAccount acc("Aryan", 5000);

    cout << "Current Balance: " << acc.getBalance() << endl;
    acc.deposit(2000);
    cout << "Updated Balance: " << acc.getBalance() << endl;

    // acc.balance = 999999; // ❌ Not allowed, balance is private
    return 0;
}
