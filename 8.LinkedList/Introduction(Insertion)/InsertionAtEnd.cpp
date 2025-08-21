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

int main()
{
    Node *Head,*Tail;
    Head =Tail= NULL;

    
    int arr[] = {2, 3, 5, 7, 10};

    for(int i=0;i<5;i++){
        if(Head==NULL){
            Head=new Node(arr[i]);
            Tail=Head;
        }
        else{
            Tail->next=new Node(arr[i]);
            
            Tail=Tail->next;
        }
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     if (Head == NULL)
    //     {
    //         Head = new Node(arr[i]);
    //     }
    //     else
    //     {
    //         Node *Tail = Head;
    //         while (Tail->next != NULL)
    //         {
    //             Tail = Tail->next;
    //         }
    //         Node *temp = new Node(arr[i]);
    //         Tail->next = temp;
    //     }
    // }

    Node *temp;
    temp = Head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}