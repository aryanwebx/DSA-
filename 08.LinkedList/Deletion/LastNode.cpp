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

int main()
{

    int arr[] = {2, 4, 6, 8};

    Node *Head;
    Head = CreateLinkedList(arr, 0, 2);

    if(Head!=NULL){
        if(Head->next==NULL){
            Node*temp=Head;
            Head=temp->next;
            delete temp;
        }
        else{
            Node * curr=Head;
            Node * prev=NULL;
            while(curr->next!=NULL){
                prev=curr;
                curr=curr->next;
            }
            prev->next=curr->next;
            delete curr;
        }
    }

    Node *t = Head;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
}
