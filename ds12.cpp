class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {;
	    for (int gap = (n + m) / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n + m; i++)
        {
            int temp;
            if (i >= n)
            {
                temp = arr2[i  - n];
            }
            else
            {
                temp = arr1[i];
            }
            int j;
            j=i;
            while(j>=gap)
            {
                if(j>=n)
                {
                 if (j - gap < n && arr1[j - gap] > temp)
                {
                        arr2[j - n] = arr1[j - gap];
                        j=j-gap;
                }
                else if (j - gap >= n && arr2[j  - n - gap] > temp)
                {
                        arr2[j - n] = arr2[j  - n - gap];
                        j=j-gap;
                 }
                 else{
                     break;
                 }
                }
                else if (j < n && arr1[j - gap] > temp)
                {
                    arr1[j] = arr1[j - gap];
                    j=j-gap;
                }
                else{
                    break;
                }
            }
            if (j >= n)
            {
                arr2[j - n] = temp;
            }
            else
            {
                arr1[j] = temp;
            }
            
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr1[k]<<" ";
    }
    cout<<endl;
    for(int l=0;l<m;l++)
    {
        cout<<arr2[l]<<" ";
    }
    cout<<endl;
 	}
};