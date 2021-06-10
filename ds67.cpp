
int countRev (string s)
{
    // your code here
    int size=s.length();
    vector<char>temp;
    if(size%2)
    return -1;
    for(int i=0;i<s.length();i++)
    {
        if(!temp.empty()&&s[i]=='}')
        {
            if(temp.back()=='{')
            {
                temp.pop_back();
            }else{
                temp.push_back(s[i]);
            }
        }else{
            temp.push_back(s[i]);
        }
    }
    int temp_size=temp.size();
    int count=0;
    //for(auto &pr:temp)
    //cout<<pr;
    while(!temp.empty()&&temp.back()=='{')
    {
        temp.pop_back();
        count++;
    }
    // cout<<endl;
    // cout<<count<<" "<<temp_size;
    // cout<<endl;
    return (temp_size/2+count%2);
}
