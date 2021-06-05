class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      sort(arr,arr+N);
      int cur=1;
      int max=1;
      int f=0;
      for(int i=0;i<N-1;i++)
      {
           if(arr[i+1]-arr[i]==1)
           {
               cur++;
           }else if(arr[i+1]-arr[i]==0){
              f=0; 
           }
           else{
               cur=1;
           }
           if(cur>max)
           {
               max=cur;
           }
      }
    //   for(int k=0;k<N;k++)
    //   {
    //       cout<<arr[k]<<" ";
    //   }
    //   cout<<endl;
      return max;
    }
};