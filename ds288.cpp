class Solution {
  public:
    int findMaxLen(string s) {
        stack<int> l;
        l.push(-1);
        int max=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                l.push(i);
            }
            else if(s[i]==')')
            {
                l.pop();
                if(l.empty())
                {
                    l.push(i);
                }
                else
                {
                    int a=i-l.top();
                    if(a>max)
                    max=a;
                }
            }                
        }
        return max;
    }
};