#include<iostream>
using namespace std;


void fun3(int n)
{
    if(n==0){
        cout << "Happy Birthday";
        return;
    }
    cout << n << " " << "days left for Birthday"<<endl;
    fun3(n-1);
}

void print(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-1);
}

void even(int n){
    // provided n is even
    if(n==2){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    even(n-2);
}

void coderarmy(int n)
{
    if(n==0)
    return;
    cout << "Coder Army"<<endl;
    coderarmy(n - 1);
}
    

int main()
{

    // fun3(3);
    // print(5);
    // even(100);
    coderarmy(10);
}