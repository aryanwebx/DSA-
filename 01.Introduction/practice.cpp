
#include <iostream>
using namespace std;

// calculate factorial
int fact(int n)
{
    int i;
    int fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter the Number:";
    cin >> n;
    int factorial;
    int count = 0;
    factorial = fact(n);
    cout << factorial << endl;

    // calculate trailing zeros
    while (factorial % 10 == 0)
    {
        count++;
        factorial=factorial/10;
    }

    cout << count;
}