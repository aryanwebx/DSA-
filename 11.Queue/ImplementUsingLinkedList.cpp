#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{

    Node *front;
    Node *rear;

public:
    Queue()
    {
        this->front = NULL;
        this->rear = NULL;
    }

    bool IsEmpty()
    {

        return front == NULL;
    }

    void push(int x)
    {
        if (IsEmpty())
        {
            cout << "Pushed " << x << " into the Queue" << endl;
            front = rear = new Node(x);
            return;
        }
        else
        {
            rear->next = new Node(x);
            // this is for when Heap memory is full
            if (rear->next == NULL)
            {
                cout << "Queue Overflow" << endl;
                return;
            }
            cout << "Pushed " << x << " into the Queue" << endl;
            rear = rear->next;
        }
    }

    void pop()
    {

        if (IsEmpty())
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        else
        {
            cout << "Popped " << front->data << " from the Queue" << endl;
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }

    int start()
    {

        if (IsEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        else
        {
            return front->data;
        }
    }
};

int main()
{

    Queue q;
    q.push(5);
    q.push(25);
    q.push(235);
    q.push(58);
    q.pop();
    q.pop();
}