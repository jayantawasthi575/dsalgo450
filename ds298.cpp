void reverse(queue<int>& q,int k,queue<int>& q1)
{
    if(q.empty()||k==0)
    return;
    else{
        int d=q.front();
        q.pop();
        k--;
        reverse(q,k,q1);
        q1.push(d);
    }
}
queue<int> modifyQueue(queue<int> q, int k)
{
    if(k==0)
    return q;
    queue<int> q1;
    reverse(q,k,q1);
    while(!q.empty())
    {
        int d=q.front();
        q.pop();
        q1.push(d);
    }
    return q1;
}