#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    string s= "ABCDEABCD";
    vector<string> prefix;
    vector<string> suffix;
    string temp1;
    string temp2;
    int len=1;
    int lps=-1;

    while(len<s.size()){
        for(int i=0;i<len;i++){
            temp1+=s[i];
        }
        
        prefix.push_back(temp1);

        for (int i=len;i<s.size();i++){
            temp2+=s[i];
        }
       
        suffix.push_back(temp2);

        temp1.clear();
        temp2.clear();
        len++;
    }

    for(int i=0;i<prefix.size();i++){
        for(int j=0;j<suffix.size();j++){
            if(prefix[i]==suffix[j]){
                int size=prefix[i].size();
                lps=max(lps,size);
            }
        }
    }

    cout<<lps;

            return 0;
}