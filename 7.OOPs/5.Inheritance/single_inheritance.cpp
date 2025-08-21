#include <iostream>

using namespace std;

class Humans
{
protected:
    string name;
    int age;

public:
    Humans(string name, int age)
    {
        this->name = name;
        this->age = age;
        cout << "humans" << endl;
    }

    ~Humans()
    {
        cout << "Destructor-Human" << endl;
    }
};

class Student : public Humans
{
public:
    int roll_Number;
    int fees;

    Student(string name, int age, int roll_Number, int fees) : Humans(name, age)
    {
        // this->name = name;
        // this->age = age;
        this->roll_Number = roll_Number;
        this->fees = fees;
        cout << "Student" << endl;
    }

    void display()
    {
        cout << name << " " << age << " " << roll_Number << " " << fees << endl;
        ;
    }

    ~Student()
    {
        cout << "Destructor-Student" << endl;
    }
};

int main()
{
    Student A("Aryan", 23, 2, 223);
    A.display();
}

/*
        1.Always first execute parent constructor then after child constructor.
        2.Reverse in the destructor

*/