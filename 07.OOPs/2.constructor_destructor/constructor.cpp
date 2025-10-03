#include <iostream>
using namespace std;

class Customer
{
public:
    string name;
    int account_no;
    int balance;

public:
    // Default Parameter
    Customer()
    {
        name = "Aryan";
        account_no = 2173393;
        balance = 100;
        // cout << "Constructor is called";
    }

    // Parameterized Constructor
    //  Customer(string a,int b,int c){
    //      name=a;
    //      account_no=b;
    //      balance=c;
    //  }

    Customer(string name, int account_no, int balance)
    {
        this->name = name;
        this->account_no = account_no;
        this->balance = balance;
    }

    // inline Customer(string a,int b,int c):name(a),account_no(b),balance(c){

    // }

    Customer(Customer &B){
        name=B.name;
        account_no=B.account_no;
        balance=B.balance;
    }
    
    void display()
    {
        cout << name << " " << account_no << " " << balance << endl;
    }
};

int main()
{
    Customer A;
    A.display();
    Customer B("Amarjeet", 21972, 3223);
    B.display();
    Customer C(B);
    C.display();
    
    Customer D=B;
    D.display();
}
