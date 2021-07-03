#include <bits/stdc++.h>
using namespace std;
bool checkRedundancy(string& str)
{
    stack<char>l;
    for(int i=0;i<str.length();i++)
    {   
        cout<<str[i];
        if(str[i]=='(' || str[i]=='+' || str[i]=='-'|| str[i]=='/' || str[i]=='*')
        {
            l.push(str[i]);
        }
        else if(str[i]==')')
        {   
            int flag=0;
            while(true)
            {
                if(flag==0 && l.top()=='(')
                {
                    return true;
                }
                flag=1;
                l.pop();
                if(l.top()=='(')
                {
                    l.pop();
                    break;
                }
            }
        }
    }
    return false;
}
void findRedundant(string& str)
{
    bool ans = checkRedundancy(str);
    if (ans == true)
        cout << "Yes\n";
    else
        cout << "No\n";
}
 int main()
{
    string str = "((a+b))";
    findRedundant(str);
   
    str = "(a+(b)/c)";
    findRedundant(str);
 
    str = "(a+b*(c-d))";
    findRedundant(str);
 
    return 0;
}