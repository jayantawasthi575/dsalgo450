class Solution {
public:
    void printVec(vector<int> &v){
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // int i=0;
        // sort(intervals.begin(), intervals.end());
        // vector<vector<int>>::iterator it;
        // while(i<intervals.size()-1)
        // {    
        //     if(intervals[i][1]>=intervals[i+1][0]&&intervals[i][1]<=intervals[i+1][1])
        //     {
        //     vector<int>temp={intervals[i][0],intervals[i+1][1]};
        //     intervals.emplace(intervals.begin()+i,temp);
        //     intervals.erase(intervals.begin()+i+1);  
        //     intervals.erase(intervals.begin()+i+1);
        //     }
        //     else if(intervals[i][1]>=intervals[i+1][0]&&intervals[i][1]>intervals[i+1][1])
        //     {
        //     vector<int>temp={intervals[i][0],intervals[i][1]};
        //     intervals.emplace(intervals.begin()+i,temp);
        //     intervals.erase(intervals.begin()+i+1);  
        //     intervals.erase(intervals.begin()+i+1); 
        //     }
        //     else{
        //     i++;
        //     }
        // }
        // return intervals;
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        for (auto interval : intervals) {
            cout<<interval[0];
            cout<<endl;
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            }
            else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        return merged;
    }
};