vector <int> zigZagTraversal(Node* root)
{
	queue<Node*>q;
	vector<int>s;
	stack<int>sq;
	q.push(root);
	bool ltr=false;
	int i=0;
	while(q.empty()==false)
	{   int size=q.size();
	   while(size>0)
	   {
	       size=size-1;
	       Node* travel=q.front();
	       q.pop();
	       if (ltr==true)
           s.push_back(travel->data);
           else
           sq.push(travel->data);
           if(travel->right!=NULL)
             q.push(travel->right);
           if(travel->left!=NULL)
             q.push(travel->left);
	   }
	   while(ltr==false && !(sq.empty()))
	   {
	       int m=sq.top();
	       sq.pop();
	       s.push_back(m);
	   }
       if(ltr)
       ltr=false;
       else
       ltr=true;
	}
	return s;
}