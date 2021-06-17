class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1)
        {
            if(nums[0]==target)
                return 0;
            else 
                return -1;
        }
        map<int,int>temp;
        for(int i=0;i<nums.size();i++)
        {
            temp[nums[i]]=i;
        }
        for(auto &pr:temp)
            cout<<pr.first<<" "<<pr.second<<endl;
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        int x=target;
        int flag=0;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                flag=1;
                break;
            }
            else if(target>nums[mid])
            {
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        if(flag==1)
        return temp.at(target);
        else
        return -1;
    }
};