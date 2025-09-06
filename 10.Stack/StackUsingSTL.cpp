#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> S;
    S.push(1);
    S.push(-1);
    S.push(3);
    cout << S.size() << endl;
    cout << S.empty() << endl;
    cout << S.top() << endl;
}