class Solution {
public:
    void count(string str,int mi,vector<string>&send)
    { 
     if(mi==0)
     {
         int mp=min(str);
         if(mp==0)
         {
            if(find(send.begin(), send.end(), str) == send.end() )
             send.push_back(str);
         }
         return;
     }
     for(int i=0;i<str.length();i++)
     {
         string left=str.substr(0,i);
         string right=str.substr(i+1);
         count(left+right,mi-1,send);
     }
    }
    int min(string st)
    {
        stack<char> se;
        for(int i=0;i<st.length();i++)
        {
         if(st[i]=='(')
          se.push(st[i]);
          else if(st[i]==')')
          {
           if(se.size()==0)
               se.push(st[i]);
            else if(se.top()==')')
                se.push(st[i]);
            else if(se.top()=='(')
                se.pop();      
          }
        }
        return se.size();
    }
    vector<string> removeInvalidParentheses(string s) {
        int mi=min(s);
        vector<string> send;
        count(s,mi,send);
        return send;
    }
};