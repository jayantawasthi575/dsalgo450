class Solution {
public:
    void display(vector<int> &v){
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    int findDuplicate(vector<int>& nums) {
        std::sort(nums.begin(),nums.begin()+nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(i!=nums.size()-1)
            {
                if(nums[i]==nums[i+1])
                {
                    return nums[i];
                }
            }
        }
        // display(nums);
        return 0;
    }
};