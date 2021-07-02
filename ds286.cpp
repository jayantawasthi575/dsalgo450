void sortedinsert(stack<int>&s,int x)
{    
    //cout<<x<<endl;
    if(s.size()==0)
    {s.push(x);
    //cout<<s.top()<<endl;
    }
    else
    {
        int a=s.top();
        s.pop();
        if(a>x)
        {
        sortedinsert(s,x);
        s.push(a);    
        }
        else
        {s.push(a);
        s.push(x);
        }
    }
}
void reverse(stack<int>&s)
{
    if(s.size()>0)
   {
       int x=s.top();
       //cout<<x<<" ";
       s.pop();
       reverse(s);
       //cout<<x<<" ";
       sortedinsert(s,x);
   }
}
// void rever(stack<int>&s)
// {
//     while(!s.empty())
//     {
//         cout<<s.top()<<" ";
//         s.pop();
//     }
// }
void SortedStack :: sort()
{ 
    reverse(s);
    //cout<<endl;
    //cout<<endl;
    // while(!s.empty())
    // {
    //     cout<<s.top();
    //     s.pop();
    // }
   // reverse();
   //cout<<"Done";
//   while(!s1.empty())
//   {
//       s.push(s1.top());
//       s1.pop();
//   }
}