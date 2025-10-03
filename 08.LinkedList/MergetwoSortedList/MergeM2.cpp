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
    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

void traverse(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int arr1[] = {2, 4, 5, 7};

    int arr2[] = {3, 4, 4, 6, 8, 10};
    Node *head1, *head2;
    head1 = head2 = NULL;

    head1 = CreateLinkedList(arr1, 0, 4);
    head2 = CreateLinkedList(arr2, 0, 6);

    traverse(head1);
    traverse(head2);

    Node *head, *tail;
    head = new Node(0);
    tail = head;
    while (head1 && head2)
    {
        if (head1->data < head2->data)
        {
            tail->next = head1;
            head1 = head1->next;
            tail = tail->next;
            tail->next = NULL;
        }
        else
        {
            tail->next = head2;
            head2 = head2->next;
            tail = tail->next;
            tail->next = NULL;
        }
    }

    if (head1)
    {
        tail->next = head1;
    }
    else
    {
        tail->next = head2;
    }
    Node *temp = head;
    head = head->next;
    delete temp;

    traverse(head);
}
