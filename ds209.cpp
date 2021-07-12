void get(Node* root,vector<int>& store)
{
    if(root==NULL)
    return;
    get(root->left,store);
    store.push_back(root->data);
    get(root->right,store);
}
int getCount(Node *root, int l, int h)
{
  vector<int> store;
  get(root,store);
  int m=0;
  for(int i=0;i<store.size();i++)
  {
      if(store[i]>=l && store[i]<=h)
      {
       m++;   
      }
  }
  return m;
}