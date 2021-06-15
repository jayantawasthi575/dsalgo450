class Solution{
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{   
	    long long sum1=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n-2;i++)
	    {
	       int j=i+1;
	       int k=n-1;
	       //cout<<"i "<<i<<" "<<j<<" "<<k<<endl;
	       while(j<k)
	       {    
	           int sum2=arr[i]+arr[j]+arr[k];
	           if(sum2<sum)
	           {
	               //cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
	               sum1=sum1+k-j;
	               j++;
	               
	           }else if(sum2>sum)
	           {
	               k--;
	           }else if(sum2==sum)
	           {
	               k--;
	           }
	       }
	   }
	   return sum1;
	}
};