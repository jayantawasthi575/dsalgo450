unordered_map<string,int>str;
string find(Node* root,vector<Node*> &dup)
{
    if(root==NULL)
    return "$";
    string s="";
    s=s+find(root->left,dup);
    s=s+to_string(root->data);
    s=s+find(root->right,dup);
    if(str[s]==1)
    {
        dup.push_back(root);
    }
    str[s]++;
    return s;
}
vector<Node*> printAllDups(Node* root)
{
    str.clear();
    vector<Node*> dup;
    string w=find(root,dup);
    return dup;
}