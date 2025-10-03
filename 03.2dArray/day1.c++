#include <iostream>
#include <climits>

using namespace std;
int main()
{
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr2[3][4] = {13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    // int ans[3][4];

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // // subtracting two matrices

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         ans[i][j] = arr1[i][j] - arr2[i][j];
    //     }
    // }

    // // printing the resultant matrix

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // print row index with max sum

    // int sum = INT_MIN;
    // int row_index = -1;

    // for (int i = 0; i < 3; i++)
    // {
    //     int totalsum = 0;
    //     for (int j = 0; j < 4; j++)
    //     {
    //         totalsum += arr1[i][j];
    //     }

    //     if(totalsum>sum){
    //         sum=totalsum;
    //         row_index=i;
    //     }
    // }


    // cout<<"Row index with max sum is: "<<row_index<<endl;

    // sum of diagonal elements

    // int first = 0;
    // int second = 0;

    // for (int i = 0; i < 3; i++)
    // {
    //     first += arr[i][i];
    // }

    // int i = 0;
    // int j = 2;

    // while (j >= 0)
    // {
    //     second += arr[i][j];
    //     i++;
    //     j--;
    // }

    // cout << "Sum of diagonal elements is: " << first + second-arr[1][1] << endl;

    // reverse each row of matrix
    // for (int i = 0; i < 3; i++)
    // {
    //     int start = 0;
    //     int end = 3;

    //     while(start<end){
    //         swap(arr1[i][start],arr1[i][end]);
    //         start++;
    //         end--;
    //     }
    // }

    // // printing the reversed matrix

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // timeComplexity: O(m*n)
    // spaceComplexity: O(1)
}