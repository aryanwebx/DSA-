#include<iostream>
#include<queue>

using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=this->right=NULL;
    }
};

int main(){

    queue<Node*>q;
    int x;
    int left,right;
    cout<<"Enter Root Element: ";
    cin>>x;

    Node* root=new Node(x);
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        cout<<"Enter Left Child of "<<temp->data<<endl;
        cin>>left;

        if(left!=-1){
            temp->left=new Node(left);
            q.push(temp->left);
        }

        cout<<"Enter Right Child of "<<temp->data<<endl;
        cin>>right;

        if(right!=-1){
            temp->right=new Node(right);
            q.push(temp->right);
        }
        
    }


    return 0;
}