#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int>q;
    q.push(2);
    q.push(3);
    q.push(10);
    q.pop();

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    cout<<q.size()<<endl;

    cout<<q.empty()<<endl;
}

