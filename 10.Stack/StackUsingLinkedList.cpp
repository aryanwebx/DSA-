#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

class Stack
{
    Node *top;
    int size;

public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    void push(int value)
    {
        Node *temp = new Node(value);
        if (temp == NULL)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
            cout << top->data << " pushed into the stack" << endl;
        }
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack is underflow" << endl;
            return;
        }
        else
        {
            Node *temp = top;
            cout << "popped " << top->data << " from the stack" << endl;
            top = top->next;
            delete temp;
            size--;
        }
    }

    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return top->data;
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    int isSize()
    {
        return size;
    }
};

int main(){

    Stack S;
    S.push(-1);
    S.push(2);
    S.push(3);
    S.pop();
    S.pop();

    cout<<S.isSize()<<endl;
    cout<<S.isEmpty()<<endl;
    int value=S.peek();
    if(S.isSize()!=0){
        cout<<value<<endl;
    }
    return 0;
}