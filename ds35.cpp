class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{   
		    int k;
		    sort(v.begin(),v.end());
		    if(v.size()%2==0)
		    {   
		        k=v.size()/2;
		        return (v[k-1]+v[k])/2;
		    }
		    else{
		        k=v.size()/2;
		        return v[k];
		    }
		}
};