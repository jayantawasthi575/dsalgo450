class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    pair<int,int> arr[nums.size()];
	    for(int i=0;i<nums.size();i++)
	    {
	        arr[i].first=nums[i];
	        arr[i].second=i;
	    }
	   // for(auto &pr:arr)
	   // cout<<pr.first<<" "<<pr.second<<endl;
	   // cout<<"After Sort";
	   sort(arr, arr + nums.size());
	   // for(auto &pr:arr)
	   // cout<<pr.first<<" "<<pr.second<<endl;
	   vector<bool>  vis(nums.size(),false);
	   // for(int i=0;i<nums.size();i++)
	   // cout<<vis[i]<<endl;
	     int ans=0;
	     for(int i=0;i<nums.size();i++)
	     {
	         if(vis[i]||arr[i].second==i)
	         {    
	             //cout<<"ohh "<<i<<endl;
	             continue;
	         }
	         int cycle_size = 0;
             int j = i;
             while (!vis[j])
            {
                vis[j] = 1;
                j = arr[j].second;
                cycle_size++;
            //     cout<<"yes"<<endl;
            //     for(int i=0;i<nums.size();i++)
	           //  cout<<vis[i]<<endl;
	           //  cout<<endl;
            }
            
            if (cycle_size > 0)
            {
                ans += (cycle_size - 1);
            }
	     }
	     //cout<<endl;
	   //  for(int i=0;i<nums.size();i++)
	   // cout<<vis[i]<<endl;
	   // for(int i=0;i<nums.size();i++)
	   // {
	        
	   // }
	  // cout<<endl;
	   return ans;
	}
};
