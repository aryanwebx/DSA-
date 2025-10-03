#include <iostream>
using namespace std;

class Customer
{

    string name;
    int *balance;

public:
    // Customer()
    // {
    //     name = "Aryan";
    //     balance = new int;
    //     *balance = 100;
    //     cout << "Constructor is called for " << name << endl;
    // }
    
    
    Customer(string name)
    {
        this->name = name;
        cout << "Constructor is called for " << name << endl;
    }

    ~Customer()
    {
        cout << "Destructor is called for " << name << endl;
    }
};

int main()
{
    // Customer A;

    Customer A1("1"),A2("2"),A3("3");
}