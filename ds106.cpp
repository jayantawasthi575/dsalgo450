class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       vector<long long int> final;
        long long int temp=1;
        vector<long long int>left;
        vector<long long int>right;
        if(nums.size()==1)
        {
            long long int al=1;
            final.push_back(al);
            return final;
        }
        for(int i=0;i<n;i++)
        {
            temp=temp*nums[i];
            left.push_back(temp);
        }
        temp=1;
        for(int j=n-1;j>=0;j--)
        {
            temp=temp*nums[j];
            right.push_back(temp);
        }
        reverse(right.begin(),right.end());
        temp=1;
        final.push_back(right[1]);
        // for(int i=0;i<n;i++)
        // cout<<left[i]<<" ";
        // cout<<endl;
        // for(int i=0;i<n;i++)
        // cout<<right[i]<<" ";
        // cout<<endl;
        for(int k=1;k<=n-2;k++)
        {
            final.push_back(left[k-1]*right[k+1]);
        }
        final.push_back(left[n-2]);
        // for(int i=0;i<n;i++)
        // cout<<final[i]<<" ";
        // cout<<endl;
        return final;
    }
};