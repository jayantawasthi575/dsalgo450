void reverse(queue<int>& q)
{
    if(q.empty())
    return;
    else
    {
        int d=q.front();
        q.pop();
        reverse(q);
        q.push(d);
    }
}
queue<int> rev(queue<int> q)
{   
    reverse(q);
    return q;
}