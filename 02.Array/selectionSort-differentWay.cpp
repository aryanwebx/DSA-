// Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place.

#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n, index;
    cout << "Enter Size Of Array:";
    cin >> n;

    // Input Array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sorting Array by placing highest number at last place.

    for (int i = n - 1; i >= 0; i--)
    {
        index = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[index])
                index = j;
        }
        swap(arr[index], arr[i]);
        cout<<endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << ' ';
        }
    }

    // Print Sorted Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<' ';
    }
}
