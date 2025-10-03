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

    Node *curr1, *curr2;
    curr1 = head1;
    curr2 = head2;

    Node *head, *tail;
    head = tail = NULL;

    while (curr1 && curr2)
    {
        if (curr1->data < curr2->data)
        {
            Node *temp = new Node(curr1->data);
            if (head == NULL)
            {
                head = tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = tail->next;
            }
            curr1 = curr1->next;
        }
        else
        {
            Node *temp = new Node(curr2->data);
            if (head == NULL)
            {
                head = tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = tail->next;
            }
            curr2 = curr2->next;
        }
    }

    while (curr1)
    {
        Node *temp = new Node(curr1->data);
        tail->next = temp;
        tail = tail->next;
        curr1 = curr1->next;
    }
    while (curr2)
    {
        Node *temp = new Node(curr2->data);
        tail->next = temp;
        tail = tail->next;
        curr2 = curr2->next;
    }
    traverse(head);
}
