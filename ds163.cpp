class Solution{
    public:
    //Function to find the height of a binary tree.
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
};