#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left,*right;
    Node(int data)
    {
        this->data=data;
        this->left=this->right=NULL;
    }
};
void preorderIterative(Node* root)
{
    if(root==NULL)
    return;
    stack<Node*>stac;
    stac.push(root);
    while(!stac.empty())
    {
        Node* curr=stac.top();
        stac.pop();
        cout<<curr->data<<" ";
        if(curr->right)
        stac.push(curr->right);
        if(curr->left)
        stac.push(curr->left);
    }
}

void printPreorder(struct Node* node)
{
    if(node==NULL)
    return;
    cout<<node->data<<" ";
    printPreorder(node->left);
    printPreorder(node->right);
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
    preorderIterative(root);
    cout<<endl;
    printPreorder(root);
    return 0;
}


