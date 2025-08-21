#include <iostream>
#include<vector>
using namespace std;

void merge(int arr[],int start,int mid,int end){
    vector<int>temp(end-start+1);
    int left=start,right=mid+1,index=0;

    while (left <= mid &&right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++,left++;
        }
        else{
            temp[index]=arr[right];
            index++,right++;
        }
    }
    while(left<=mid){
        temp[index]=arr[left];
        index++,left++;
    }
    while(right<=end){
        temp[index]=arr[right];
        index++,right++;
    }
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++,index++;
    }
}

void mergesort(int arr[], int start, int end)
{
    if (start == end)
        return;

    int mid = start + (end - start) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {9, 3, 8, 1, 2, 6, 5};
    mergesort(arr, 0, 6);
    for (int item : arr)
    {
        cout << item << " ";
    }
}