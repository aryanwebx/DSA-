#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s = "ABCDEABCD";
    int n = s.size();
    int lps;
    
    for(int len=1;len<s.size();len++){

        bool match=true;
        for(int i=0;i<len;i++){
            if(s[i]!=s[n-len+i]){
                match=false;
                break;
            }
        }
        if(match){
            lps=len;
        }
    }
    
    cout<<lps<<endl;

    return 0;
}