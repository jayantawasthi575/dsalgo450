class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {   
        vector<int> v;
        sort(candies,candies+N);
        int min=0,n=N,i=0;
        while(i<n)
        {
            min=min+candies[i];
            n=n-K;
            i++;
        }
        v.push_back(min);
        int max=0;
        i=N-1,n=-1;
        while(i>n)
        {
            max=max+candies[i];
            n=n+K;
            i--;
        }
        v.push_back(max);
        return  v;
    }
};