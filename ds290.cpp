void QueueStack :: push(int x)
{
        if(q1.empty())
        q1.push(x);
        else
        {
            while(!q1.empty())
            {
                int a=q1.front();
                q2.push(a);
                q1.pop();
            }
            q1.push(x);
            while(!q2.empty())
            {
                int a=q2.front();
                q1.push(a);
                q2.pop();
            }
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{  
    if(!q1.empty())
    {
    int a=q1.front();
    q1.pop();
    return a;
    }
    else
    {
        return -1;
    }
}