void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
      return s.size()==n;
}

bool isEmpty(stack<int>& s){
	return s.empty();
}

int pop(stack<int>& s){
    int a=s.top();
	 s.pop();
	 return a;
}

int getMin(stack<int>& s){
    int min=s.top();
    s.pop();
	while(!(s.empty()))
	{
	    if(min>s.top())
	    {
	        min=s.top();
	    }
	    s.pop();
	}
	return min;
}