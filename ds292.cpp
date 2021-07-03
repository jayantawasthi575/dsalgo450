void StackQueue :: push(int x)
{
    if(s1.empty())
    {
        s1.push(x);
    }
    else
    {
        while(!s1.empty())
        {
            int a=s1.top();
            s1.pop();
            s2.push(a);
        }
        s1.push(x);
        while(!s2.empty())
        {
            int a=s2.top();
            s2.pop();
            s1.push(a);
        }
    }
}
int StackQueue :: pop()
{
     if(!s1.empty())
     {
         int a =s1.top();
         s1.pop();
         return a;
     }
     else
     {
         return -1;
     }
}