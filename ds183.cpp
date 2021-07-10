unordered_map<string,int>str;
string find(Node* root)
{
    if(root==NULL)
    return "$";
    string s="";
    if(root->right==NULL && root->left==NULL)
    {
        s=to_string(root->data);
        return s;
    }
    s=s+to_string(root->data);
    s=s+find(root->left);
    s=s+find(root->right);
    str[s]++;
    return s;
}
bool dupSub(Node *root)
{
     str.clear();
     find(root);
     for(auto x:str)
     {
         if(x.second>=2)
         return true;
     }
     return false;
}