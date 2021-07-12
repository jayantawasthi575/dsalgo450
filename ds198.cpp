class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool check(Node* root,Node* min,Node* max)
    {
        if(root==NULL)
        return true;
        if((min!=NULL && min->data>=root->data)||(max!=NULL && root->data>=max->data))
        return false;
        return (check(root->left,min,root)&&(check(root->right,root,max)));
    }
    bool isBST(Node* root) 
    {
       Node* min=NULL;
       Node* max=NULL;
       return check(root,min,max);
    }
};