#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
    }

    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;            
        }
        else
        {
            top++;
            arr[top] = value;
            cout << value << " is pushed into the stack" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            cout << arr[top] << " is popped out from the stack" << endl;
            top--;
        }
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
       return top==-1;
    }

    int isSize(){
        return top+1;        
    }
};

int main(){
    Stack S(5);
    S.push(-1);
    S.push(2);
    S.push(3);
    S.pop();
    S.pop();
    cout<<S.isEmpty()<<endl;
    cout<<S.isSize()<<endl;

    int value=S.peek();
    if(S.isSize()!=0){
       cout<<value<<endl;
    }

    return 0;
}
