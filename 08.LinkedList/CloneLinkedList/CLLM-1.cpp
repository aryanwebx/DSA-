#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* random;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->next=NULL;
    }
};


void printLinkedList(Node* head){
    Node*temp=head;
    while(temp){
        cout<<"Node data: "<<temp->data<<", Random points to: ";
        if(temp->random){
            cout<<temp->random->data<<endl;
        }
        else{
            cout<<nullptr<<endl;
        }
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    
    //Create Node
    Node* head=NULL;
    Node* node1=new Node(1);
    Node* node2=new Node(2);
    Node* node3=new Node(3);
    Node* node4=new Node(4);

    //Create Linked List
    head=node1;
    head->next=node2;
    node2->next=node3;
    node3->next=node4;

    //Assign random nodes
    head->random=node4;
    node2->random=node3;
    node3->random=node1;
    node4->random=node2;
    printLinkedList(head);

    //Clone next part of head linked list
    Node *headcopy=new Node(0);
    Node *tailcopy=headcopy;

    Node* curr=head;

    while(curr){
        Node* temp=new Node(curr->data);
        tailcopy->next=temp;
        tailcopy=tailcopy->next;
        curr=curr->next;
    }
    tailcopy=headcopy;
    headcopy=headcopy->next;
    delete tailcopy;

    printLinkedList(headcopy);
}