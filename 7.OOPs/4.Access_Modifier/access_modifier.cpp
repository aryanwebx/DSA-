#include<iostream>
using namespace std;

class Human{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void fun(){
        a=10;
        b=2;
        c=23;
    }
};


int main(){
    Human A;
    // A.a = 1; // not access
    // A.b = 1; // not access
    A.c=1; // access

    A.fun(); //access
}