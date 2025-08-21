#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s = "abacdabad";

    string m = "abad";

    int index=-1;

    for (int i = 0; i < s.size(); i++)
    {
        int first = i;
        int second = 0;

        while(second<m.size()){
            if(s[first]==m[second]){
                first++;
                second++;
            }
            else{
                
                break;
            }
        }
        if(second==m.size()){
            index=i;
        }
    }

    cout<<index<<endl;

    return 0;
}

