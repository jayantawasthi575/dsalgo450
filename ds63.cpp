int wordBreak(string A, vector<string> &B) {
    //int dp[A.length()];
    vector<string>M;
    int c=0,f=0;
    string tem;
    for(int i=0;i<A.length();i++)
    {   
        
        if(f==1)
        {
           c=1; 
        }
        else
        {
            c++;
        }
        string temp=A.substr(A.length()-i-1,c);
        for(auto &pr:B)
        {   
            //cout<<temp<<" "<<c;
            if(pr==temp)
            {
               // dp[A.length()-i-1]=1;
                f=1;
                M.insert(M.begin(),pr);
                break;
            }
            else
            {
                //dp[A.length()-i-1]=0;
                f=0;
            }
        }
    }
    //cout<<endl;
    // for(int k=0;k<A.length();k++)
    // cout<<dp[k]<<" ";
    // cout<<endl;
    for(auto &pr:M)
    {
        tem=tem+pr;
    }
    if(tem==A)
    return 1;
    else 
    return 0;
}