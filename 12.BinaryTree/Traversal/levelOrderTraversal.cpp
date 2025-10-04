#include <iostream>
#include <queue>

using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

int main()
{

    queue<Node *> q;

    // creation of Binary Tree

    int x, left, right;
    cout << "Enter Root Node :";
    cin >> x;

    Node *root = new Node(x);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter left child of " << temp->data << " :";
        cin >> left;

        if (left != -1)
        {
            temp->left = new Node(left);
            q.push(temp->left);
        }

        cout << "Enter right child of " << temp->data << " :";
        cin >> right;

        if (right != -1)
        {
            temp->right = new Node(right);
            q.push(temp->right);
        }
    }

    // Level Order traversal of Binary tree

    cout << "\nLevel Order Traversal :";
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }

    return 0;
}