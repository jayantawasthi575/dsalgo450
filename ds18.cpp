class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
         map<int,int> pair;
        int counter=0;
        for(int i=0;i<n;i++)
        {
            if(pair[arr[i]]>0)
            {
                pair[arr[i]]++;
            }
            else{
                pair[arr[i]]=1;
            }
        }
        for(int m=0;m<n;m++)
        {
            counter+=pair[k-arr[m]];
            if(k-arr[m]==arr[m])
            {
                counter--;
            }
        }
        return  counter/2;
    }
};
