class Solution {
public:
    TreeNode* minValueNode(TreeNode* node)
    {
    TreeNode* current = node;
    while (current && current->left != NULL)
            current = current->left;
    return current;  
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
    if(root==NULL)
    return root;
    if(key<root->val)
       root->left = deleteNode(root->left, key);
    else if (key > root->val)
        root->right = deleteNode(root->right, key);
    else{
        if (root->left==NULL and root->right==NULL)
            return NULL;
        else if (root->left == NULL) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        TreeNode* temp = minValueNode(root->right);
        root->val = temp->val;
        root->right = deleteNode(root->right, temp->val);
    }
    return root;
    }
};