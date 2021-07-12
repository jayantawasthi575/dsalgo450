void get(Node* root,vector<int>& store)
{
    if(root==NULL)
    return;
    get(root->left,store);
    store.push_back(root->data);
    get(root->right,store);
}
int countPairs(Node* root1, Node* root2, int x)
{
    vector<int> store1;
    vector<int> store2;
    get(root1,store1);
    get(root2,store2);
    unordered_set<int> s;
    for (int i = 0; i < store1.size(); i++)
        s.insert(store1[i]);
    int l=0;
    for(int j=0;j<store2.size();j++)
    {
        if(s.find(x-store2[j])!=s.end())
            l++;
    }
    return l;
}