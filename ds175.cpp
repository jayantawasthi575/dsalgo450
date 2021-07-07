class Solution {
public:
    void leftBoundary(Node* node,vector<int> &s)
    {
        if(node==NULL)
        {
            return;
        }
        if(node->left!=NULL)
        {
            s.push_back(node->data);
            leftBoundary(node->left,s);
        }
        else if(node->right!=NULL)
        {
            s.push_back(node->data);
            leftBoundary(node->right,s);
        }
    }
    void bottomboundary(Node* node,vector<int> &s)
    {
        if(node==NULL)
        return;
        bottomboundary(node->left,s);
        if(node->left==NULL && node->right==NULL)
        s.push_back(node->data);
        bottomboundary(node->right,s);
    }
    void rightBoundary(Node* node,vector<int> &s)
    {
        if(node==NULL)
        return;
        if(node->right!=NULL)
        {
        rightBoundary(node->right,s);
        s.push_back(node->data);
        }
        else if(node->left!=NULL)
        {
            rightBoundary(node->left,s);
            s.push_back(node->data);
        }
    }
    vector <int> printBoundary(Node *root)
    {
        vector<int> store;
        store.push_back(root->data);
        leftBoundary(root->left,store);
        bottomboundary(root,store);
        rightBoundary(root->right,store);
        return store;
    }
};