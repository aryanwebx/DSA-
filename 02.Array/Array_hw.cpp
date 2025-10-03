#include<iostream>
using namespace std;

int main()
{
   char arr[1000];
   
   for(int i=97;i<123;i++)
   {
        arr[i]=i;
   }

   for (int i = 97; i < 123; i++)
   {
       cout << arr[i]<<" ";
   }
}