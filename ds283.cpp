class Solution
{
    public:
    int evaluatePostfix(string S)
    {
        stack<int>l;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]!='*'&&S[i]!='/'&&S[i]!='+'&&S[i]!='-')
            {
                int k=S[i]-'0';
                l.push(k);
            }
            else{
                int k1=l.top();
                l.pop();
                int k2=l.top();
                l.pop();
                int k3=0;
                if(S[i]=='*')
                    k3=k1*k2;
                else if(S[i]=='/')
                    k3=k2/k1;
                else if(S[i]=='+')
                    k3=k2+k1;
                else
                    k3=k2-k1;
                l.push(k3);
            }
        }
        return l.top();
    }
};