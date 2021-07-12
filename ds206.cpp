class Solution{
  public:
    // Return the Kth smallest element in the given BST 
    void find(Node* root,int K,int &store,int &flag,int &i)
    {
        if(root==NULL||flag==1)
        return;
        find(root->left,K,store,flag,i);
        i++;
        if(i==K)
        {
            store=root->data;
            flag=1;
            return;
        }
        find(root->right,K,store,flag,i);
    }
    int KthSmallestElement(Node *root, int K)
    {
       int store;
       int flag=0;
       int i=0;
       find(root,K,store,flag,i);
       if(flag==1)
       return store;
       else 
       return -1;
    }
};