class Solution{
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
       priority_queue<int> gquiz;
       for(int i=0;i<n;i++)
       gquiz.push(a[i]);
       for(int j=0;j<m;j++)
       gquiz.push(b[j]);
       vector<int> mlc;
       while(!gquiz.empty())
       {   
         //  cout<<gquiz.top()<<" ";
           mlc.push_back(gquiz.top());
           gquiz.pop();
       }
       return mlc;
    }
};