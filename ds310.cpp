class Solution {
  public:
    bool isHeap(struct Node * tree)
    {
        queue<Node*> q;
        q.push(tree);
        bool nullish=false;
        while(!q.empty())
        {
            Node* temp=q.front();
            q.pop();
            if(temp->left)
            {
                if(nullish || temp->left->data >= temp->data)
                return false;
                q.push(temp->left);
            }
            else
            {
                nullish=true;
            }
            if(temp->right)
            {
                if(nullish || temp->right->data >= temp->data)
                return false;
                q.push(temp->right);
            }
            else
            {
                nullish=true;
            }
        }
        return true;
    }
};