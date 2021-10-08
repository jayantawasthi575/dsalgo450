class Solution{
    public:
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
            sort(arr,arr+N,greater<int>());
            int i=0;
            int s=0;
            while(i<N-1)
            {
                int x=abs(arr[i]-arr[i+1]);
                if(x<K)
                {
                    s=s+arr[i];
                    s=s+arr[i+1];
                    i=i+2;
                }
                else
                i++;
            }
            //cout<<s<<endl;
            return s;
    }
};