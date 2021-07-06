void leftviewsend(struct Node *root,int level, int *max_level,vector<int>& send)
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
        leftviewsend(root->left, level + 1, max_level,send);
        leftviewsend(root->right, level + 1, max_level,send);
    }
}
vector<int> leftView(Node *root)
{
   vector<int> send;
   int max_level=0;
   int level=1;
   leftviewsend(root,level,&max_level,send);
   return send;
}