class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	   // long long maxx=1;
	   // long long minn=1;
	   // long long ff=1;
	   // long long s=0;
	   // int f=0;
	   // for(int i=0;i<n;i++)
	   // {   
	   //     if(arr[i]>0)
	   //     {
	   //        maxx=maxx*arr[i]; 
	   //        minn=min(minn*arr[i],ff);
	   //        f=1;
	   //     }
	   //     else if(arr[i]==0)
	   //     {
	   //         maxx=1;
	   //         minn=1;
	   //     }
	   //     else{
	   //         int temp=maxx;
	   //         maxx=max(minn*arr[i],ff);
	   //         minn=temp*arr[i];
	   //     }
	   //     if(s<maxx)
	   //     {
	   //         s=maxx;
	   //     }
	   // }
	   // if(f==0&&s==0)
	   // {
	   //     return 0;
	   // }
	    
	   // return s;
	     
	     
	    long long minVal = arr[0];
	    long long maxVal = arr[0];

	    long long maxProduct = arr[0];

	    for (int i = 1; i < n; i++) {

	        // When multiplied by -ve number,
	        // maxVal becomes minVal
	        // and minVal becomes maxVal.
	        if (arr[i] < 0) swap(maxVal, minVal);

	        // maxVal and minVal stores the
	        // product of subarray ending at arr[i].
	        maxVal = max((long long)arr[i], maxVal * arr[i]);
	        minVal = min((long long)arr[i], minVal * arr[i]);

	        // Max Product of array.
	        maxProduct = max(maxProduct, maxVal);
	    }

	    // Return maximum product found in array.
	    return maxProduct;
	
	}
};