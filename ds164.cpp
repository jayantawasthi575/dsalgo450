class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(struct Node* node)
    {
        if (node == NULL)
            return 0;
        return 1 + max(height(node->left), height(node->right));
    }
    int diameter(Node* root) {
       if(root==NULL)
       return 0;
       else
       {
           int lheight=height(root->left);
           int rheight=height(root->right);
           int ldiameter=diameter(root->left);
           int rdiameter=diameter(root->right);
           return max(1+(lheight+rheight),max(ldiameter,rdiameter));
       }
    }
};