// Print all number in every window size k

#include <iostream>
#include <queue>
#include <string>
using namespace std;

// void print(queue<int>q){
//     while(!q.empty()){
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout<<endl;
// }

// int main()
// {

//     int arr[] = {3, 6, 2, 7, 8, 11};
//     queue<int> q;

//     int k=3;

//     for(int i=0;i<k-1;i++){
//         q.push(arr[i]);
//     }

//     for(int i=k-1;i<6;i++){
//         q.push(arr[i]);
//         print(q);
//         q.pop();
//     }

//     return 0;
// }

// first-non-repeating-character-in-a-stream-of-character

int main(){

    string A="abaebacbdaecd";
    vector<int>repeated(26,0);
    queue<char>q;
    string B="";

    for(int i=0;i<A.size();i++){
        if(repeated[A[i]-'a']>=1){
            repeated[A[i]-'a']++;

            while(!q.empty()&& repeated[q.front()-'a']>1){
                q.pop();
            }
            if(q.empty()){
                B+='#';
            }
            else{
                B+=q.front();
            }
        }
        else{
            repeated[A[i] - 'a']++;
            q.push(A[i]);
            while (repeated[q.front() - 'a'] > 1){
                q.pop();
            }
            B+=q.front();
        }
    }

    cout<<B;

    return 0;
}