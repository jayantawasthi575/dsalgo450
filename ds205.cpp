class Solution
{
    public:
    void find(Node* root,int K,int &store,int &flag,int &i)
    {
        if(root==NULL||flag==1)
        return;
        find(root->right,K,store,flag,i);
        i++;
        if(i==K)
        {
            store=root->data;
            flag=1;
            return;
        }
        find(root->left,K,store,flag,i);
    }
    int kthLargest(Node *root, int K)
    {
        int store;
        int flag=0;
        int i=0;
        find(root,K,store,flag,i);
        return store;
    }
};
