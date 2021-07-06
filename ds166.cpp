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
void inorderIterative(Node* root)
{
    stack<Node*> stack;
    Node* curr=root;
    while(!stack.empty()||curr!=NULL)
    {
        if(curr!=NULL)
        {
            stack.push(curr);
            curr=curr->left;
        }
        else
        {
            curr=stack.top();
            stack.pop();
            cout<<curr->data<<" ";
            curr=curr->right;
        }
    }
}
void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
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
    inorderIterative(root);
    cout<<endl;
    printInorder(root);
    return 0;
}
