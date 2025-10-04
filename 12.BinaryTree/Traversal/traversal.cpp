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

void PreOrder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(Node *root){
    if(root==NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PostOrder(Node *root){
    if(root==NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}


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
    cout<<"Enter root Node :";
    Node *root=BinaryTree();
    cout<<"PreOrder Traversal: ";
    PreOrder(root);
    cout<<"\nInOrder Traversal: ";
    InOrder(root);
    cout<<"\nPostOrder Traversal: ";
    PostOrder(root);
}