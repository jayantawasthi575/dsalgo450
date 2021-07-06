class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void rightviewsend(struct Node *root,int level, int *max_level,vector<int>& send)
    {
        if(root==NULL)
        return;
        else
        {
            if(*max_level<level)
            {
                send.push_back(root->data);
                *max_level=level;
            }
            rightviewsend(root->right, level + 1, max_level,send);
            rightviewsend(root->left, level + 1, max_level,send);
        }
    }
    vector<int> rightView(Node *root)
    {
       vector<int> send;
       int max_level=0;
       int level=1;
       rightviewsend(root,level,&max_level,send);
       return send;
    }
};