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
    if(index==size){
        return NULL;
    }
    Node *temp=new Node(arr[index]);
    temp->next=CreateLinkedList(arr,index+1,size);
    return temp;
}

void traverse(Node *head){
    Node *temp=head;
    while(temp){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    int arr[] = {2, 2, 4,5};
    Node *head = NULL;

    head = CreateLinkedList(arr, 0, 4);
    traverse(head);

    Node *curr=head;
    while(curr->next){
        if(curr->next->data==curr->data){
            Node *temp=curr->next;
            curr->next=temp->next;
            delete temp;
        }
        else{
            curr=curr->next;
        }
    }

    traverse(head);
}