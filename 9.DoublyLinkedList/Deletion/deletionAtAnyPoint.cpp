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
    int pos = 5;
    Node *temp = head;
    if(head!=NULL){
        
        //Deletion of first node 
        if (pos == 1)
        {
            head = head->next;
            head->prev = NULL;
            delete temp;
        }
        else
        {
    
            while (--pos)
            {
                temp = temp->next;
            }
            //Deletion of last node 
            if (temp->next == NULL)
            {
                temp->prev->next = NULL;
                delete temp;
            }
            //Deletion of any node
            else
            {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                delete temp;
            }
        }
    }

    traverse(head);
}