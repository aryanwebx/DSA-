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
    head = CreateDLL(arr, 0, 5, NULL);
    traverse(head);

    int pos=5;
    Node *curr=head;
    //Insertion at start
    if(pos==0){
        //Insertion when Linked list doesn't exist
        if(curr==NULL){
            curr=new Node(8);
        }
        //Insertion when Linked list exist
        else{
            Node *temp=new Node(8);
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
    }
    //Insertion at any point or end
    else{
        while(--pos){
            curr=curr->next;
        }
        // Insertion at end
        if(curr->next==NULL){
            Node *temp=new Node(8);
            curr->next=temp;
            temp->prev=curr;
        }
        //Insertion at any point
        else{
            Node *temp=new Node(8);
            temp->prev=curr;
            temp->next=curr->next;
            curr->next->prev=temp;
            curr->next=temp;
        }
    }
    traverse(head);
}