#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void traverse(Node *head){
    Node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    Node *head=NULL;
    for(int i=0;i<5;i++){
        //if LinkedList doesn't exist
        if(head==NULL){
            Node *temp=new Node(arr[i]);
            head=temp;    
        
        }
        //Linked list exist
        else{
            Node *temp=new Node(arr[i]);
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
    }
    traverse(head);
}