#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout << "Enter size of Array:";
    cin >> n;

    // Input Array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Insertion Sort (increasing Order)
    /*
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }
    */

    // Insertion Sort (decreasing Order)
    /*
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }
    */

    // Bubble Sort (increasing Order But comparison start from last)
    for(int i=n-2;i>=0;i--)
    {
        for(int j=i;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            else
            {
                break;
            }
        }
    }

    // Print Sorted Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}