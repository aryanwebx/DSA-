#include <iostream>
using namespace std;

// // Binary Search for increasing sorting
// int binary_search(int arr[], int n, int key)
// {
//     int start = 0, end = n - 1, mid;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if (arr[mid] == key)
//             return mid;
//         else if (arr[mid] < key)
//             start = mid + 1;
//         else
//             end = mid - 1;
//     }
//     return -1;
// }

// Binary Search for decreasing sorting
int binary_search(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[1000];
    int n, key;
    cout << "Enter the size of Array:";
    cin >> n;

    // input Array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element you want to search:";
    cin >> key;

    cout << binary_search(arr, n, key);
    return 0;
}