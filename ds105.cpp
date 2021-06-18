class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
    unordered_map<ll,ll> check;
    ll temp=0;
    check[0]=1;
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        temp=temp+arr[i];
        if( check.find(temp) == check.end() )
        {
            check[temp]=1;
        }
        else{
            count=count+check[temp];
            check[temp]=check[temp]+1;
        }
    }
    return count;
    }
};