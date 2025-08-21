#include <iostream>
using namespace std;
int incr(int n)
{
    return n++; // here value is 11 from 10
}
int main()
{
    int a = 10;
    int b;
    b = incr(a);
    cout << b; // value of b=10 and not 11
}