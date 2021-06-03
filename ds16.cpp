class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long mi=0;
    void merge(long long a[],long long l,long long m,long long r){
        long long n1=m-l+1;
        long long n2=r-m;
        long long L[n1],R[n2];
        for (long long i = 0; i < n1; i++)
            L[i] = a[l + i];
        for (long long j = 0; j < n2; j++)
            R[j] = a[m + 1 + j];
        
         long long i = 0;
        long long j = 0;
        long long k = l;
     
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                a[k] = L[i];
                i++;
            }
            else {
                a[k] = R[j];
                j++;
                mi=mi+n1-i;
                //cout<<L[i]<<" "<<R[j]<<endl;
            }
            k++;
        }
        while (i < n1) {
            a[k] = L[i];
            i++;
            k++;
        }
        while (j < n2) {
            a[k] = R[j];
            j++;
            k++;
        }
    }
    
    void mergesort(long long a[],long long l,long long r)
    {
    if(l<r)
    {   
        
        long long mid=(l+r-1)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
    if(l>=r)
    {
        return;
    }
    } 

    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        mergesort(arr,0,N-1);
        // for(long long i=0;i<N;i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl<<mi<<endl;
        long long int res = mi;
        mi = 0;
        return res;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends