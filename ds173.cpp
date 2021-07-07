int height(struct Node* node){
if(node==NULL)
return 0;
else
{
    int left=height(node->left);
    int right=height(node->right);
    return 1+max(left,right);
}
}
bool isBalanced(Node *root)
{   
    if (root == NULL)
        return 1;
    int left=height(root->left);
    int right=height(root->right);
   // cout<<left<<" "<<right<<endl;
    if(abs(left-right)<=1 && isBalanced(root->left) && isBalanced(root->right))
    return true;
    else
    return false;
}
