Node* lca(Node* root ,int n1 ,int n2 )
{
       if(root==NULL)
       return NULL;
       if(root->data==n1 || root->data==n2)
       return root;
       Node* lnode=lca(root->left,n1,n2);
       Node* rnode=lca(root->right,n1,n2);
       if(lnode!=NULL && rnode!=NULL)
       return root;
       else if(lnode!=NULL)
       return lnode;
       else
       return rnode;
}
int findDistance(Node *root, int x)
{
    if (root == NULL)
      return -1;
    int dist = -1;
    if ((root->data == x) ||(dist = findDistance(root->left, x)) >= 0 ||(dist = findDistance(root->right, x)) >= 0)
        return dist + 1;
    return dist;
}
int findDist(Node* root, int a, int b) {
   Node* node=lca(root,a,b);
   int d1=findDistance(node,a);
   int d2=findDistance(node,b);
   return d1+d2;
}