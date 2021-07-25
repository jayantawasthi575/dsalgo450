class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void findCombination(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds)
    {
        if(ind==arr.size())
        {
            if(target==0)
            ans.push_back(ds);
            return;
        }
        if(arr[ind]<=target)
        {
            ds.push_back(arr[ind]);
            findCombination(ind,target-arr[ind],arr,ans,ds);
            ds.pop_back();
        }
        findCombination(ind+1,target,arr,ans,ds);
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        findCombination(0,B,A,ans,ds);
        return ans;
    }
};
