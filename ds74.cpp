int minFlips (string S)
{   
    int count1=0;
    int count2=0;
    string temp=S;
    for(int i=0;i<S.size();i++)
        {
            if(i%2!=0)
            {
                if(S[i]=='0')
                {
                    count1++;
                    S[i]='1';
                }
            }else{
                if(S[i]=='1')
                {
                    count1++;
                    S[i]='0';
                }
            }
        }
        // for(int i=0;i<S.size();i++)
        //   cout<<S[i]<<" ";
        //   cout<<endl;
        for(int i=0;i<temp.size();i++)
        {
            if(i%2!=0)
            {
                if(temp[i]=='1')
                {
                    count2++;
                    temp[i]='0';
                }
            }else{
                if(temp[i]=='0')
                {
                    count2++;
                    temp[i]='1';
                }
            }
        }
        // for(int i=0;i<temp.size();i++)
        //   cout<<temp[i]<<" ";
        //   cout<<endl;
    return min(count1,count2);
}