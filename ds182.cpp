class Solution{
  public:
    /*You are required to complete this method*/
    bool ch(struct Node* root,int l,int *ll)
    {
        if(root==NULL)
        return true;
        if(root->left==NULL && root->right==NULL)
        {
            if(*ll==0)
            { 
            *ll=l;
            return true;
            }
            return l==*ll;
        }
        return ch(root->left,l+1,ll) && ch(root->right,l+1,ll);
    }
    bool check(Node *root)
    {
      int l=0,ll=0;
      return ch(root,l,&ll);
    }
};