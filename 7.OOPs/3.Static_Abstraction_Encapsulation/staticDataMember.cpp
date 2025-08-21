#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number, balance;
    static int total_account;
    static int total_balance;

public:
    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_account++;
        total_balance += balance;
    }

    static void staticData()
    {
        cout << "Total Number of account :" << total_account << endl;
        cout << "Total balance :" << total_balance << endl;
    }
};

int Customer::total_account = 0;
int Customer::total_balance = 0;

int main()
{
    Customer A1("Aryan", 1, 1000);
    Customer A2("Amarjeet", 2, 2000);
    Customer::staticData();
}