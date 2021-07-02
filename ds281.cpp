class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int i=0;
        stack<int>l;
        while(i<n)
         {l.push(i);
         i++;
         }
        while(l.size()!=1)
        {
            int t1=l.top();
            l.pop();
            int t2=l.top();
            l.pop();
            if(M[t1][t2]==1)
            {
                l.push(t2);
            }
            else{
                l.push(t1);
            }
        }
        for (auto it = M[l.top()].begin();it != M[l.top()].end(); it++)
        {
            if(*it==1)
            {
                return -1;
            }
        }
        i=0;
        while(i<n)
        {
            if(M[i][l.top()]!=1&&(i!=l.top()))
            return -1;
            i++;
        }
        return l.top();
    }
};