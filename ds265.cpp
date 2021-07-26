class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    priority_queue<int> gquiz;
	    int i;
	    for(i=0;i<n;i++)
	        gquiz.push(arr[i]);
	    i=0;  
        vector<int>send;
        while(i<k)
        {   
            int n=gquiz.top();
            send.push_back(n);
            gquiz.pop();
            i++;
        }
        return send;
	}
};