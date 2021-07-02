class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {   int f=0;
    vector<char> temp;
    for(int i=0;i<x.length();i++)
    {
        if(i==0 && (x[i]==')'|| x[i]=='}'||x[i]==']') )
        {
            temp.push_back(x[i]);
        }
        if(x[i]=='['||x[i]=='('||x[i]=='{')
        {
            temp.push_back(x[i]);
        }
       else if(x[i]=='}'&&temp.back()=='{')
        {
            temp.pop_back();
        }
        else if(x[i]==']'&&temp.back()=='[')
        {
            temp.pop_back();
        }else if(x[i]==')'&&temp.back()=='(')
        {
            temp.pop_back();
        }else{
            temp.push_back(x[i]);
        }
    }
    // for(vector<char>::iterator it = temp.begin() ; it != temp.end(); ++it)
    // {
    //     cout<<*it<<" ";
    // }
   // cout<<temp.front()<<" "<<temp.back();
    if(temp.empty())
    return true;
    else
    return false;
};