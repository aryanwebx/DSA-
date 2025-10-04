#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;

    Node(int value){
        data=value;
        left=right=NULL;
    }
};

Node *BinaryTree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }

    Node *temp=new Node(x);
    cout<<"Enter left child of "<<temp->data<<" :";
    temp->left=BinaryTree();
    cout<<"Enter right child of "<<temp->data<<" :";
    temp->right=BinaryTree();
    return temp;
}


int main(){

    cout<<"Enter root element :";
    Node *root=BinaryTree();

}