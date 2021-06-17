class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int kp)
    {
        int arr3[m+n];
        int i=0;
        int j=0;
        int k=0;
        while(i<n && j<m)
        {    //cout<<i<<" "<<j<<" "<<k<<endl;
            if(arr1[i]<=arr2[j])
            {
                arr3[k]=arr1[i];
                i++;
                k++;
            }
            else{
                arr3[k]=arr2[j];
                j++;
                k++;
            }
        }
       // cout<<"In"<<endl;
        while(i<n)
        {    //cout<<i<<" "<<k<<endl;
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        //cout<<"inn"<<endl;
        while(j<m)
        {    //cout<<j<<" "<<k<<endl;
            arr3[k]=arr2[j];
            j++;
            k++;
        }
        // for(int i=0;i<m+n;i++)
        // cout<<arr3[i]<<" ";
        // cout<<endl;
         return arr3[kp-1];
    }
};