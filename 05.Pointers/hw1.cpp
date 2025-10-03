#include <iostream>
using namespace std;

int main()
{
    int arr[3][4];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            arr[i][j] = i + j;

    cout << arr<<endl;
    cout << arr[0]<<endl;
    cout << arr[0][0];
}