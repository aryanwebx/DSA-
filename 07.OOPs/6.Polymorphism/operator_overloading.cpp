/*

<-------------------------------- Operator Overloading--------------------------->


In C++, operator overloading means giving special meaning to C++ operators (+, -, *, ==, etc.) when they are used with user-defined data types (classes/objects).

❌ Operators that cannot be overloaded in C++

Scope resolution operator ::
Member access (dot) operator .
Member access through pointer-to-member .*
Ternary conditional operator ?:
sizeof operator
typeid operator (used with RTTI)
alignof operator (since C++11)
decltype operator (C++11)
co_await operator (C++20, for coroutines)

⚡ Why some can’t be overloaded?
Because they are tied to core language features like scope management (::), object member resolution (.), and compile-time operations (sizeof, decltype).

*/
#include<iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;

    public:
    Complex(){

    }

    Complex(int real,int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }

    void display(){
        cout<<real<<"+i"<<imaginary<<endl;
    }

    Complex operator +(Complex &C){
        Complex ans;
        ans.real=real+C.real;
        ans.imaginary=imaginary+C.imaginary;
        return ans;
    }
};

int main(){

    Complex C1(3,4);
    Complex C2(4, 6);
    C1.display();
    C2.display();
    
    Complex C3=C1+C2;
    C3.display();
}
