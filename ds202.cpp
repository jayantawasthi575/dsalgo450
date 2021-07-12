class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void get(Node* root,vector<int>& store)
    {
        if(root==NULL)
        return;
        get(root->left,store);
        store.push_back(root->data);
        get(root->right,store);
    }
    void change(Node* root,vector<int> &store,int &i)
    {
        if(root==NULL)
        return;
        change(root->left,store,i);
        root->data=store[i++];
        change(root->right,store,i);
    }
    Node *binaryTreeToBST (Node *root)
    {
        vector<int> store;
        get(root,store);
        sort(store.begin(),store.end());
        int i=0;
        change(root,store,i);
        return root;
    }
};