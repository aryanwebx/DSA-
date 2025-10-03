#include <iostream>
using namespace std;

int main()
{
    char arr[1000];
    int n, index;
    cout << "Enter size of Array:";
    cin >> n;

    // input Values of Array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[index], arr[i]);
    }

    // Print Sorted Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}
