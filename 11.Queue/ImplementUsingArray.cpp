#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int front, rear, size;

public:
    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        rear = front = -1;
    }

    bool IsEmpty()
    {
        return front == -1;
    }

    bool IsFull()
    {
        return rear == size - 1;
    }

    void push(int x)
    {
        if (IsEmpty())
        {
            cout << "Pushed " << x << " into the Queue" << endl;
            front = rear = 0;
            arr[0] = x;
            return;
        }

        else if (IsFull())
        {
            cout << "Queue Overflow";
            return;
        }

        else
        {
            rear = rear + 1;
            arr[rear] = x;
            cout << "Pushed " << x << " into the Queue" << endl;
        }
    }

    void pop()
    {

        if (IsEmpty())
        {
            cout << "Queue Underflow";
            return;
        }
        else
        {
            if (front == rear)
            {
                cout << "Pooped " << arr[front] << " from the Queue" << endl;
                front = rear = -1;
            }
            else
            {
                cout << "Pooped " << arr[front] << " from the Queue" << endl;
                front = front + 1;
            }
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
            return arr[front];
        }
    }
};

int main()
{
    Queue q(5);
    q.push(10);
    q.push(15);
    q.push(30);
    q.pop();
    q.pop();

    int x = q.start();
    if (!q.IsEmpty())
    {
        cout << x << endl;
    }
}