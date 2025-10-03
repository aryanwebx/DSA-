#include <iostream>
using namespace std;

class Animals
{
public:
    virtual void speak()
    {
        cout << "huhuhu"<<endl;
    }
};


class Dog: public Animals{

    public:
    void speak(){
        cout<<"bark"<<endl;
    }
};


int main(){

    Animals *p;
    p=new Dog();
    p->speak();
}