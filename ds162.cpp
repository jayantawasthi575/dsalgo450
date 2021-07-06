vector<int> reverseLevelOrder(Node *root)
{
    queue<Node*>q;
    stack<Node*>s;
    vector<int>store;
    q.push(root);
    while(q.empty()==false)
    {
            Node* travel=q.front();
            q.pop();
            s.push(travel);
            if(travel->right)
            {
                q.push(travel->right);
            }
            if(travel->left)
            {
                q.push(travel->left);
            }
    }
    while(!s.empty())
    {
        Node* travel=s.top();
        store.push_back(travel->data);
        s.pop();
    }
    return store;
}