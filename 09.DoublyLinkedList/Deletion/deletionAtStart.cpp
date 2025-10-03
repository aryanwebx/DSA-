#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

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

Node *CreateDLL(int arr[], int index, int size, Node *back)
{
    if (index == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr, index + 1, size, temp);
    return temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    Node *head = NULL;
    head = CreateDLL(arr, 0, 1, NULL);
    traverse(head);
    
    if(head!=NULL){
        //Deletion when only one node exist
        if(head->next==NULL){
            delete head;
            head=NULL;
        }
        //Deletion when more than one node exist
        else{
            Node *temp=head;
            head=head->next;
            head->prev=NULL;
            delete temp;
        }
    }
    
    traverse(head);
}