class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        long long maxarea=0;
        long long area=0;
        int top=0;
        stack<long long>s;
        int i=0;
        while(i<n)
        {
            if(s.empty()||arr[s.top()]<=arr[i])
            s.push(i++);
            else
            {
             top=s.top();
             s.pop();
             area=arr[top]*(s.empty()?i:i-s.top()-1);
             if(area>maxarea)
             maxarea=area;
            }
        }
        while(!s.empty())
        {
            top=s.top();
            s.pop();
            area=arr[top]*(s.empty()?i:i-s.top()-1);
            if(area>maxarea)
             maxarea=area;
        }
        return maxarea;
    }
};