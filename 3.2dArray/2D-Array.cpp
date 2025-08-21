#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;
    int **ptr = new int *[n];
    for (int i = 0; i < n; i++)
        ptr[i] = new int[m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            ptr[i][j] = i + j;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //         cout << ptr[i][j] << " ";
    //     cout << endl;
    // }
    
    for (int i = 0; i < n; i++)
        delete[] ptr[i];

    delete[] ptr;

    return 0;
}