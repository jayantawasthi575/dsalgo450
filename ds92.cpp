class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int> t1;
	    for(int i=0;i<n;i++)
	        {
	           if(arr[i]==i+1)
	           {
	               t1.push_back(i+1);
	           }
	        }
	    return t1;
	}
};
