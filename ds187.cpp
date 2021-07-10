#include <bits/stdc++.h>
using namespace std;
struct Node {
    int key;
    Node *left, *right;
};
Node* newNode(int key)
{
    Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
}
int maxsum=0;
int findLargestSubtreeSum(Node* node)
{
    if(node==NULL)
    return 0;
    int lh=findLargestSubtreeSum(node->left);
    int rh=findLargestSubtreeSum(node->right);
    //cout<<node->key<<endl;
    int cursum=lh+rh+node->key;
    if(cursum>maxsum)
    maxsum=cursum;
    return cursum;
}
int main()
{
    Node* root = newNode(1);
    root->left = newNode(-2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(-6);
    root->right->right = newNode(2);
    //int cursum=0;
    int m=findLargestSubtreeSum(root);
    cout << maxsum;
    return 0;
}