/*
<---------------------- Introduction of Object Oriented Programming ---------------------->
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student
{

    // public:
private:
    string Name;
    int Roll_Number;
    int age;
    string Grade;

public:
    void setName(string s)
    {
        if (s.size() == 0)
        {
            cout << "Enter Name";
            return;
        }
        Name = s;
    }

    void setRollNumber(int r)
    {
        if (r > 100)
        {
            cout << "Enter Valid RollNumber";
            return;
        }
        Roll_Number = r;
    }

    void setAge(int a)
    {
        if (a > 100)
        {
            cout << "Enter Valid Age";
            return;
        }
        age = a;
    }

    void setGrade(string g)
    {
        Grade = g;
    }

    string getName()
    {
        return Name;
    }

    int getRoll_Number()
    {
        return Roll_Number;
    }

    int getAge()
    {
        return age;
    }

    string getGrade()
    {
        return Grade;
    }
};

int main()
{

    Student S1;
    // S1.Name="Aryan";
    // S1.Roll_Number=1;
    // S1.age=23;
    // S1.Grade="A+";

    // cout<<S1.Name<<endl;
    // cout << S1.Roll_Number << endl;
    // cout << S1.age << endl;
    // cout << S1.Grade << endl;

    // cout<<sizeof(S1);

    // set the value using setter function

    S1.setName("Aryan");
    S1.setAge(21);
    S1.setRollNumber(12);
    S1.setGrade("A+");

    // get the value using getter function
    cout << S1.getName() << endl;
    cout << S1.getRoll_Number() << endl;
    cout << S1.getAge() << endl;
    cout << S1.getGrade() << endl;
}