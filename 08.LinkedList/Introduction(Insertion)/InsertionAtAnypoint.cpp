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

int main()
{
    Node *Head, *Tail;
    Head = Tail = NULL;
    int X = 4;
    int Value = 8;

    int arr[] = {2, 3, 5, 7, 10};

    for (int i = 0; i < 5; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else
        {
            Tail->next = new Node(arr[i]);

            Tail = Tail->next;
        }
    }

    Node *Temp;
    Temp = Head;
    while (X != 1)
    {
        X--;
        Temp = Temp->next;
    }
    Node *NewNode;
    NewNode = new Node(Value);
    NewNode->next=Temp->next;
    Temp->next=NewNode;

    Node *temp = Head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}