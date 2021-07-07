class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    void fillMap(Node* root,int d,int l,map<int,pair<int,int>>&m)
    {
    if(root==NULL)
    return;
    if(m.count(d)==0)
    {
     m[d]=make_pair(root->data,l);
    }
    else if(m[d].second>l)
    {
        m[d]=make_pair(root->data,l);
    }
    fillMap(root->left,d-1,l+1,m);
    fillMap(root->right,d+1,l+1,m);
    }
    vector<int> topView(Node *root)
    {
        //Your code here
        map<int,pair<int,int>>m;
        fillMap(root,0,0,m);
        vector<int> send;
        for (auto it = m.begin(); it != m.end(); it++) {
            send.push_back(it->second.first);
         }
         return send;
    }

};