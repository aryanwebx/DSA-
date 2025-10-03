#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void introduction()
    {
        cout << "My name is " << name << endl;
    }
};

class Employee : public Person
{
protected:
    int salary;

public:
    void my_salary()
    {
        cout << "My salary is " << salary<<endl;
    }
};

class Manager : public Employee
{
public:
    string department;

    Manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void work()
    {
        cout << "I'm leading the " << department << " department" << endl;
    }
};

int main(){

    Manager A1("Aryan",122,"IT");
    A1.introduction();
    A1.my_salary();
    A1.work();

}