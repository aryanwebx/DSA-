#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;

    Node(int data)
    {
        this->data = data;
    }
};

Node *createLinkedList(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next = createLinkedList(arr, index + 1, size);
    return temp;
};

void traverse(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    Node *head = createLinkedList(arr, 0, 6);
    // traverse(head);

    Node *curr = head->next;
    Node *prev = head;

    while (curr)
    {   
        if(curr->next==NULL){
            prev->next=NULL;
            Node *temp=curr;
            curr=curr->next;
            delete temp;
            traverse(head);
        }
        else{
        prev->next = curr->next;
        Node *temp = curr;
        curr = curr->next->next;
        prev = prev->next;
        delete temp;
        traverse(head);
        }
    }
    // traverse(head);
    return 0;
}