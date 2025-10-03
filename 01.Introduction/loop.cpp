#include <iostream>
using namespace std;

int main()
{
    // for(int i=0;i<20;i++)
    // {
    //     cout << "India will win the World Cup 2023"<<endl;
    // }

    // int n;
    // cout << "Enter Number:";
    // cin >> n;
    // for (int i = 1; i < n; i++)
    // {
    //     if (i % 2 == !0)
    //     {
    //         cout << i << endl;
    //     }

    // }

    // int n;
    // cout << "Enter Number:";
    // cin >> n;
    // for(int i=1;i<=n;i++)
    // {
    //     if (i%4==0)
    //     cout<<i<<endl;

    // }

    // for (char c = 'a'; c <= 'z'; c = c + 1)
    // {
    //     cout << c << endl;
    // }

    // int n;
    // cout << "Enter Number:";
    // cin >> n;
    // for (int i = n; i >= 1; i--)
    //     cout << i << " ";

    // for (int i = 1; i <= 100; i = i + 3)
    //     cout << i << " ";

    // int number;
    // cout << "Enter Number you want table:";
    // cin >> number;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << number << " X " << i << " = " << number * i << endl;
    // }

    // int number, power, i, num;
    // cout << "Enter Number:";
    // cin >> number;
    // num = number;
    // cout << "Enter Power:";
    // cin >> power;
    // for (i = 1; i < power; i = i + 1)
    // {
    //     num = num * number;
    // }
    // cout << num;

    // int number, i, sum = 0;
    // cout << "Enter Number:";
    // cin >> number;
    // for (i = 1; i <= number; i = i + 1)
    // {
    //     sum = sum + i;
    // }
    // cout << sum;

    // int number,i,sum=0;
    // cout<<"Enter Number:";
    // cin>> number;
    // for(i=1;i<=number;i=i+1)
    // {
    //     sum=sum+(i*i);
    // }
    // cout<<sum;

    // int number, i, fact = 1;
    // cout << "Enter the number:";
    // cin >> number;

    // for (i = 1; i <= number; i = i + 1)
    // {
    //     fact = fact * i;
    // }
    // cout << fact;

    // int number;
    // cout << "Enter Number:";
    // cin >> number;
    // if (number < 2)
    // {
    //     cout << "Not Prime";
    //     return 0;
    // }
    // else
    // {
    //     for (int i = 2; i < number; i = i + 1)
    //     {
    //         if(number%2==0)
    //         {
    //         cout<<"Not Prime";
    //         return 0;
    //         }
    //     }

    //     cout << "prime";
    // }

    int term, i;
    int first_term = 0;
    int second_term = 1;
    int temp = 0;
    cout << "Enter Term in Fibonacci_Series:";
    cin >> term;

    if (term == 1)
    {
        cout << first_term;
        return 0;
    }
    else if (term == 2)
    {
        cout << second_term;
        return 0;
    }
    else
    {
        for (i = 3; i <= term; i = i + 1)
        {
            temp = first_term + second_term;
            first_term=second_term;
            second_term=temp;
        }
        cout << temp;
        return 0;
    }
}
