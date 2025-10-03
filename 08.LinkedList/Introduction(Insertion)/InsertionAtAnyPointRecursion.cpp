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

Node *CreateLinkedList(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

void insertAtAnyPoint(Node *head, int X, int Value)
{
    if(X==1){
        Node *temp=new Node(Value);
        temp->next=head->next;
        head->next=temp;
        return;
    }
    X--;
    head=head->next;
    insertAtAnyPoint(head,X,Value);
    
}

int main()
{
    Node *Head, *Tail;
    Head = Tail = NULL;

    int arr[] = {2, 3, 5, 7, 10};
    Head = CreateLinkedList(arr, 0, 5);

    cout << "Before Insertion"<<endl;

    Node *temp;
    temp = Head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    insertAtAnyPoint(Head,3,30);
    cout << "\nAfter Insertion"<<endl;


    
    temp = Head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}