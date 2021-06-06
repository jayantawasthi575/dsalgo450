class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    std::sort(a.begin(),a.end());
    long long min;
    if(m<=n)
    {
        min=a[m-1]-a[0];
    }
    else{
        min=0;
        return min;
    }
    for(int i=1;i<n;i++)
    
    { //cout<<a[i+m-1]-a[i]<<" "<<a[i+m-1]<<" "<<a[i]<<" "<<endl; 
       if(i+m-1<n)
       {
        if(min>a[i+m-1]-a[i])
        {  
            // cout<<min<<endl;
            min=a[i+m-1]-a[i];
        }
       }else{
           return min;
       }
    }
    return min;
    }   
};