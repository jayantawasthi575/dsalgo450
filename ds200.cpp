Node* LCA(Node *root, int n1, int n2)
{
    if(root==NULL)
    return NULL;
    if(root->data==n1 || root->data==n2)
    return root;
    Node* lnode=LCA(root->left,n1,n2);
    Node* rnode=LCA(root->right,n1,n2);
    if(lnode!=NULL && rnode!=NULL)
    return root;
    else if(lnode!=NULL)
    return lnode;
    else
    return rnode;
}