#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout << "Enter size of Array:";
    cin >> n;

    // input Array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sorting (increasing Order)
    /* for (int i = n - 1; i > 0; i--)
     {
         bool swapped = 0;
         for (int j = 0; j <= i; j++)
         {
             if (arr[j] > arr[j + 1])
             {
                 swap(arr[j], arr[j + 1]);
                 swapped = 1;
             }
         }
         if (swapped == 0)
             break;
     } */

    // Bubble Sort (decreasing order)
    /*
    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
    */

    // Bubble Sort (increasing Order But comparison start from last)
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = 0;
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }

    // Print Sorted Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}