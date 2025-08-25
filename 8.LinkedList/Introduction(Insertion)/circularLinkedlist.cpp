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

Node *createCircularLinkedList(int arr[], int size)
{
    Node *head;
    Node *temp = new Node(arr[0]);
    head = temp;

    for (int i = 1; i < size; i++)
    {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    temp->next = head;
    return head;
}

void circularTraverse(Node *head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    Node *head;
    head = createCircularLinkedList(arr, 5);
    circularTraverse(head);
    return 0;
}