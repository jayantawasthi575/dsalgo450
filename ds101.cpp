class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required

    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> final;
        int saga=0;
        for(int i=0;i<arr.size()-3;i++)
        {
       if (arr[i] > 0 && arr[i] > k) break;
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        for(int j=i+1;j<arr.size()-2;j++)
        {    
            if (j > i + 1 && arr[j] == arr[j - 1]) continue;
            int n=j+1;
            int m=arr.size()-1;
            while(n<m)
            {   int temp2=n;
                int temp3=m;
                vector<int>temp;
                int l=arr[i]+arr[j]+arr[n]+arr[m];
                if(l==k)
                {
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[n]);
                    temp.push_back(arr[m]);
                    // if(saga==0)
                    // {
                    // final.push_back(temp);
                    // saga=1;    
                    // }
                    // if(final.back()!=temp&&saga==1)
                    // if(i==1)
                    // cout<<arr[i]<<" "<<arr[j]<<" "<<arr[n]<<" "<<arr[m]<<" "<<i<<" "<<j<<" "<<n<<" "<<m<<" "<<endl;
                    while (n < m && arr[n] == arr[temp2]) n++;
                    while (n < m && arr[m] == arr[temp3]) m--;
                    final.push_back(temp);

                }
                else if(l>k)
                m--;
                else if(k>l)
                n++;
            }
        }
        }
        //final.erase(unique(final.begin(),final.end()),final.end());
        // vector<vector<int>>::iterator ip;
        // ip = std::unique(final.begin(), final.end());
        //   //sort(final.begin(), final.end());   
        // final.resize(std::distance(final.begin(), ip));
        return final;
    }
};
