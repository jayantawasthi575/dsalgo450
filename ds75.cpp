class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        map<string,int> b;
        for(int i=0;i<n;i++)
           b[arr[i]]++;
        int max1=0;
        string temp1="";
        int max2=0;
        string temp2="";
        for(auto & pr:b)
        {
            if(pr.second>max1)
              {max1=pr.second;
               temp1=pr.first;
              }
        }
        for(auto &pr:b)
        {
            if(pr.first!=temp1&&pr.second>max2)
            {
                max2=pr.second;
                temp2=pr.first;
            }
        }
        //cout<<max1<<endl;
        return temp2;
    }
};