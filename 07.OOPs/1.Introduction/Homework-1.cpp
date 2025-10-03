#include <iostream>
using namespace std;

class Customer
{
    string name;
    int accountNumber;
    double accountBalance;
    bool isActive;


    public:

    Customer(string name,int accountNumber){
        this->name=name;
        this->accountNumber=accountNumber;
        this->accountBalance=0;
        this->isActive=true;
    }

    void deposit(double amount)
    {
        accountBalance += amount;
        cout<<"Deposited successfully"<<endl;
    }

    void withdraw(double amount)
    {
        if (accountBalance >= amount){
            accountBalance -= amount;
            cout << "Withdraw successfully!"<<endl;
        }
        else
            cout << "Insufficient balance in the account"<<endl<<endl;
    }

    void transfer(double amount, Customer &targetAccount)
    {
        if (accountBalance >= amount)
        {
            accountBalance -= amount;
            targetAccount.accountBalance += amount;
            cout << "Amount transferred successfully from " << this->accountNumber << " to "<<targetAccount.accountNumber<<endl<<endl;
        }
        else
            cout << "Insufficient balance for this transaction"<<endl<<endl;
    }

    void printDetails()
    {
        cout << "Customer Name   :   " << name << endl;
        cout << "Account Number   :   " << accountNumber << endl;
        cout << "Current Balance   :   " << accountBalance << endl;
        cout<<endl<<endl;
    }
};


int main(){
    Customer A("Aryan",123);
    Customer B("Amarjeet",456);
    Customer C("Abhay",789);

    A.deposit(1000);
    A.printDetails();
    A.withdraw(500);
    A.printDetails();
    B.deposit(2000);
    B.printDetails();
    B.transfer(1000,A);
    B.printDetails();
    A.printDetails();
}