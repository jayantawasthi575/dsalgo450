class Solution{
    public:
    long long countWays(int n, int k){
        if(n==1)
        return k;
        long long sum=k*1;
        long long diff=k*(k-1);
        long long total=(sum+diff)%1000000007;
        for(int i=3;i<=n;i++)
        {
            sum=diff*1;
            diff=total*(k-1);
            total=(sum+diff)%1000000007;
        }
        return total;
    }
};