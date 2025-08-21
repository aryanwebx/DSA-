#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "ababc";

    // bruteforce timecomplexity:O(n^3)

    // for (int i = 0; i < s.size(); i++)
    // {
    //     for (int j = i; j < s.size(); j++)
    //     {
    //         for (int k = i; k <= j; k++)
    //         {
    //             cout << s[k];
    //         }
    //         cout << " ";
    //     }
    // }




    for(int i=0;i<s.size();i++){
        int end=i;
        int start=i;
        
        while(end<=s.size()){
            cout<<s[start];
            
        }
    }

    return 0;
}
