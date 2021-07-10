class Solution
{
public:
    pair<int,int> sumoflongest(Node* root)
    {
        if(root==NULL)
        return  make_pair(0,0);
        if(root->left==NULL && root->right==NULL)
        return  make_pair(1,root->data);
        pair<int,int> l=sumoflongest(root->left);
        pair<int,int> r=sumoflongest(root->right);
        if (l.first > r.first) {
            return make_pair(l.first + 1, l.second + root->data);
        }
         else if (l.first < r.first) {
            return make_pair(r.first + 1, r.second + root->data);
        }
        else { 
        if (l.second > r.second)
            return make_pair(l.first + 1, l.second + root->data);
        else
            return make_pair(r.first + 1, r.second + root->data);
        }
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        return sumoflongest(root).second;
    }
};