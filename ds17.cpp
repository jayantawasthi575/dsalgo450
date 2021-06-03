class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> medium;
        int max=prices[prices.size()-1];
        medium.push_back(prices[prices.size()-1]);
        for(int i=prices.size()-2;i>=0;i--)
        {
            if(prices[i]>max)
            {   
                max=prices[i];
                medium.push_back(prices[i]);
            }
            else{
                medium.push_back(max);
            }
        }
        int maxi=0;
        for(int i=0;i<prices.size();i++)
        {    
            cout<<medium[prices.size()-i-1]<<" ";
            if(medium[prices.size()-i-1]-prices[i]>maxi)
            {
                maxi=medium[prices.size()-i-1]-prices[i];
            }
        }
        return maxi;
    }
};