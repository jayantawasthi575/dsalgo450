class Solution
{
    public:
    int sum(struct Node* node)
    {
        if(node==NULL)
        return 0;
        return sum(node->left)+node->data+sum(node->right);
    }
    bool isSumTree(Node* root)
    {
      int ls,rs;
      if(root==NULL || ( root->left==NULL && root->right==NULL ))
      return 1;
      ls=sum(root->left);
      rs=sum(root->right);
      if(root->data==ls+rs && isSumTree(root->left) && isSumTree(root->right))
      return true;
      return false;
    }
}