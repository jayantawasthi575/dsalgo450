class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool comparision(Job m1,Job m2)
    {
        if(m1.profit>m2.profit)
        return true;
        return false;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
       sort(arr,arr+n,comparision);
       int maximum=arr[0].dead;
       for(int i=1;i<n;i++)
       {
           maximum=max(maximum,arr[i].dead);
       }
       int slot[maximum+1];
       int job=0;
       int profit=0;
       for(int i=0;i<=maximum;i++)
       slot[i]=-1;
    //   for(int i=0;i<n;i++)
    //   cout<<arr[i].profit<<" ";
    //   cout<<endl;
       for(int i=0;i<n;i++)
       {
           for(int j=arr[i].dead;j>0;j--)
           {   
               if(slot[j]==-1)
               {
                   slot[j]=i;
                   job++;
                  // cout<<arr[i].profit<<endl;
                   profit=profit+arr[i].profit;
                   break;
               }
           }
       }
       vector<int> send;
       send.push_back(job);
       send.push_back(profit);
       return send;
    } 
};