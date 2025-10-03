#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

bool prime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int factorial(int n)
{
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;
    cout << prime(3) << endl;
    cout << prime(a) << endl;
    cout << prime(b) << endl;
    cout << factorial(a) << endl;
    cout << factorial(b) << endl;
}