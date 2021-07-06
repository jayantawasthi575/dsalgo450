class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      vector<int>s;
      queue<Node*>q;
      q.push(node);
      while(q.empty()==false)
      {
          Node* travel=q.front();
          s.push_back(travel->data);
          q.pop();
          if(travel->left!=NULL)
          q.push(travel->left);
          if(travel->right!=NULL)
          q.push(travel->right);
      }
      return s;
    }
};