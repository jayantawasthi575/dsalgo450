class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long>arr1;
        stack<long long>s;
        arr1.assign(n,-1);
        int i=0;
        s.push(i);
        i++;
        while(i<n && !(s.empty()))
        {
            if(arr[s.top()]>arr[i])
            {
                s.push(i);
                i++;
            }else
            {
                while(!(s.empty()))
                {  if(arr[i]>arr[s.top()])
                    {
                    arr1[s.top()]=arr[i];
                    s.pop();
                    }
                    else{
                        break;
                    }
                
                }
                s.push(i);
                i++;
            }
        }
        //cout<<endl;
        return arr1;
    }
};