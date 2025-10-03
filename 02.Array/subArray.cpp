// objective is to print subarray from array
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 4, 2, 5};

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << '/';
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << ' ' << arr[i + 1] << "/";
    }

    cout << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << arr[i] << ' ' << arr[i + 1] << ' ' << arr[i + 2] << "/";
    }

    cout << endl;

    for (int i = 0; i < 1; i++)
    {
        cout << arr[i] << ' ' << arr[i + 1] << ' ' << arr[i + 2] << ' ' << arr[i + 3] << "/";
    }

    return 0;
}