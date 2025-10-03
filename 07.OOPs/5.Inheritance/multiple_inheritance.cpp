#include <iostream>
using namespace std;

class Engineer
{
public:
    string specialization;

    void work()
    {
        cout << "I'm working in " << specialization << endl;
    }
};

class Youtuber
{
public:
    int subscriber;

    void subscriber_count()
    {
        cout << "I have subscriber base of " << subscriber << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber
{
public:
    string name;

    CodeTeacher(string name, string specialization, int subscriber)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscriber = subscriber;
    }

    void introduction()
    {
        cout << "My name is " << name << endl;
        work();
        subscriber_count();
    }
};

int main(){
    CodeTeacher A1("Aryan","CSE",732173217);
    A1.introduction();
}

/*

constrcutor call for multiple inheritance is in the order in which we inherit them.

*/