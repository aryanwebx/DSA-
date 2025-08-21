#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void find(int N, vector<string> &ans, string &temp, int zero, int one)
{
    if (temp.size() == N)
    {
        ans.push_back(temp);
        return;
    }

    // if(one==0&&zero==0){
    //     temp.push_back('1');
        
    // }

    temp.push_back('1');
    find(N, ans, temp, zero, one + 1);
    temp.pop_back();

    if (one>zero)
    {
        temp.push_back('0');
        find(N, ans, temp, zero + 1, one);
        temp.pop_back();
    }
}

int main()
{
    int N;
    vector<string> ans;
    string temp;
    cin>>N;

    find(N, ans, temp, 0, 0);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}
