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

Node *CreateLinkedList(int arr[], int index, int size,Node *prev)
{
    if (index == size)
    {
        return prev;
    }

    Node *temp;
    temp = new Node(arr[index]);
    temp->next=prev;
    return CreateLinkedList(arr,index+1,size,temp);
    
    
}

int main()
{
    Node *Head, *Tail;
    Head = Tail = NULL;

    int arr[] = {2, 3, 5, 7, 10};
    Head = CreateLinkedList(arr, 0, 5,NULL);

    Node *temp;
    temp = Head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}