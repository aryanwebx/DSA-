// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     int rem, sum = 0;
//     cin >> num;

//     while (num > 0)
//     {
//         rem = num % 10;
//         num = num / 10;
//         sum = sum + rem;

//         if (num == 0)
//         {
//             if (sum > 9)
//             {
//                 num = sum;
//                 sum=0;
//             }
//             else
//             {
//                 cout << sum;

//             }
//         }
//     }
// }

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 1)
        {
            return true;
        }
        while (n != 1)
        {
            if (n > 0)
            {
                if (n % 2 != 0)
                {
                    return false;
                }

                n /= 2;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};