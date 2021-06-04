class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        int pr[n],num=0;
        map<int,int>pre;
        for(int i=0;i<n;i++)
        {
            num=num+arr[i];
            pr[i]=num;
        }
        for(int k=0;k<n;k++)
        {
            if(pr[k]==0)
            {
              return true; 
            }else{
                pre[pr[k]]++;
                if(pre[pr[k]]>1)
                {
                    return true;
                }
            }
        }
        return false;
  
    }
};

