class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        long long sum=0;
        vector<long long>A;
        for(int i=0;i<n;i++)
        A.push_back(arr[i]);
        sort(A.begin(),A.end());
        if(A.size()<2)
        {
            return 0;
        }
        while(A.size()>=2)
        {   
            int a=A[0]+A[1];
            sum=sum+a;
            A.erase(A.begin());
            A.erase(A.begin());
            A.push_back(a);
            sort(A.begin(),A.end());
        }
        return sum;
    }
};